import java.util.Properties

val generateSecureConfig by tasks.registering {
    val inputFile = file("secret.properties")
    val cppOutput = file("src/main/cpp/secure-lib.cpp")
    val ktOutput = file("src/main/java/com/yourpackage/config/SecureConfig.kt")
    val packageName = "com.yourpackage.config" // 🔁 đổi thành package thực tế

    inputs.file(inputFile)
    outputs.files(cppOutput, ktOutput)

    fun xorEncrypt(input: String, key: Int = 0x5A): String {
        return input.map { "\\x" + ((it.code xor key).toString(16).padStart(2, '0')) }.joinToString("")
    }

    doLast {
        val props = Properties()
        inputFile.inputStream().use { props.load(it) }

        val cppBuilder = StringBuilder("""
            #include <jni.h>
            #include <string>
        """.trimIndent() + "\n\n")

        val ktBuilder = StringBuilder("""
            package $packageName

            object SecureConfig {
                init {
                    System.loadLibrary("secure")
                }
        """.trimIndent() + "\n\n")

        props.forEach { (k, v) ->
            val key = k.toString()
            val value = v.toString()
            val methodName = "get" + key.split("_").joinToString("") { it.replaceFirstChar(Char::uppercaseChar) }
            val encrypted = xorEncrypt(value)

            cppBuilder.append("""
                extern "C"
                JNIEXPORT jstring JNICALL
                Java_${packageName.replace(".", "_")}_SecureConfig_${methodName}(JNIEnv *env, jobject) {
                    const char* encrypted = "$encrypted";
                    std::string decrypted;
                    for (size_t i = 0; i < strlen(encrypted); ++i) {
                        decrypted += encrypted[i] ^ 0x5A;
                    }
                    return env->NewStringUTF(decrypted.c_str());
                }

            """.trimIndent()).append("\n")

            ktBuilder.append("    external fun $methodName(): String\n")
        }

        ktBuilder.append("\n")
        props.forEach { (k, _) ->
            val key = k.toString()
            val methodName = "get" + key.split("_").joinToString("") { it.replaceFirstChar(Char::uppercaseChar) }
            ktBuilder.append("    val ${key.uppercase()} by lazy { $methodName() }\n")
        }

        ktBuilder.append("}\n")

        cppOutput.writeText(cppBuilder.toString())
        ktOutput.writeText(ktBuilder.toString())
    }
}

tasks.named("preBuild") {
    dependsOn(generateSecureConfig)
}
