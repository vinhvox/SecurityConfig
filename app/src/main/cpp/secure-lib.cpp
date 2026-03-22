#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getBannerSplash(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x69\x6c\x6a\x68\x69\x6d\x6e\x6a\x6f\x6c";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativePermissionS2(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6b\x6a\x69\x6e\x6e\x63\x6c\x63\x62\x62";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getAdjustRevenue(JNIEnv *env, jobject) {
    const char* encrypted = "\x30\x32\x6c\x28\x32\x22";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeObFullscreen(JNIEnv *env, jobject) {
    const char* encrypted = "";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getBannerAll(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6b\x6a\x6a\x6c\x6f\x6c\x6a\x63\x6b\x69";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getRewardHealth(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6e\x6a\x6d\x6a\x6a\x69\x63\x6c\x6f\x6b";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getAdjustToken(JNIEnv *env, jobject) {
    const char* encrypted = "\x6c\x6c\x3e\x35\x62\x28\x63\x35\x35\x20\x3d\x3d";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getTermUrl(JNIEnv *env, jobject) {
    const char* encrypted = "\x32\x2e\x2e\x2a\x29\x60\x75\x75\x32\x35\x3b\x34\x3d\x68\x69\x69\x63\x6b\x74\x3d\x33\x2e\x32\x2f\x38\x74\x33\x35\x75";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getOpenSplash2f(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x68\x68\x62\x63\x68\x63\x68\x69\x62\x6a";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getInterSplash(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6b\x69\x6b\x6f\x63\x6f\x6c\x68\x6b\x6f";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativePermission(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x62\x6a\x6a\x63\x68\x62\x6e\x6c\x6c\x69";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeOb3(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x62\x6c\x6c\x69\x6b\x68\x63\x6a\x6e\x6e";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getRewardMeasureAgain(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6c\x6f\x6a\x6e\x6c\x69\x6b\x69\x6a\x6d";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getInterOnboarding(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6e\x63\x6a\x6d\x6d\x6b\x6c\x62\x6c\x68";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getFacebookClientToken(JNIEnv *env, jobject) {
    const char* encrypted = "\x3f\x3c\x6c\x6f\x62\x3b\x3b\x3b\x3b\x69\x63\x6a\x6d\x38\x6d\x6d\x3f\x62\x62\x6a\x3c\x3b\x6b\x69\x6b\x3c\x6d\x6b\x6f\x63\x3e\x68";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeLanguageS2(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6e\x6e\x63\x6a\x62\x6a\x62\x6b\x6a\x63";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getVinhvox(JNIEnv *env, jobject) {
    const char* encrypted = "\x2c\x33\x34\x32\x2c\x35\x22";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeOb2(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x68\x6c\x69\x6c\x6e\x6c\x63\x68\x6f\x68";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeOb1(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6c\x68\x68\x6a\x6d\x63\x62\x6f\x69\x63";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeHome(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6c\x6a\x63\x6f\x68\x6f\x6b\x63\x6d\x6b\x0c\x33\x34\x32\x35";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getAppopenResume(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6b\x69\x62\x69\x6e\x6a\x6e\x62\x68\x6a";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getPolicyUrl(JNIEnv *env, jobject) {
    const char* encrypted = "\x32\x2e\x2e\x2a\x29\x60\x75\x75\x29\x33\x2e\x3f\x29\x74\x3d\x35\x35\x3d\x36\x3f\x74\x39\x35\x37\x75\x2c\x33\x3f\x2d\x75\x2a\x35\x36\x33\x39\x23\x77\x2a\x28\x33\x2c\x3b\x77\x29\x2e\x35\x28\x3f\x77\x32\x35\x34\x3d\x75\x32\x35\x37\x3f";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeOb23Fullscreen(JNIEnv *env, jobject) {
    const char* encrypted = "";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getFacebookAppId(JNIEnv *env, jobject) {
    const char* encrypted = "\x69\x6a\x6d\x6b\x6f\x62\x69\x6a\x63\x6a\x62\x6a\x6b\x6c\x6e\x6e\x62";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeLanguage(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x63\x6a\x6d\x6a\x69\x68\x69\x6b\x6f\x6e";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeOb12f(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6d\x6d\x6f\x6d\x68\x6e\x6b\x6e\x62\x62";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getOpenSplash(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6f\x62\x6a\x69\x62\x62\x63\x6d\x6d\x6d";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getAdAppId(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x24\x6f\x69\x6b\x69\x6e\x62\x69\x63\x68\x63";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getBannerCollapHome(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6c\x63\x6c\x6f\x6e\x6c\x6e\x6c\x6a\x6a";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getInterSplash2f(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6d\x6b\x6b\x6c\x63\x6d\x6b\x6e\x6e\x6a";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeAll(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x63\x63\x6c\x6e\x62\x6b\x6f\x6e\x68\x6d";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeLanguage2f(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x63\x63\x6d\x6c\x68\x6b\x6a\x6d\x6b\x62";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getNativeLanguageS22f(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x63\x6a\x6a\x68\x62\x6d\x6e\x6f\x6e\x69";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getAdjustPurchase(JNIEnv *env, jobject) {
    const char* encrypted = "\x35\x6d\x2a\x6f\x29\x3c";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getInterHome(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x6d\x68\x6c\x6c\x6e\x63\x63\x62\x63\x6c";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_yourpackage_config_SecureConfig_getInterBack(JNIEnv *env, jobject) {
    const char* encrypted = "\x39\x3b\x77\x3b\x2a\x2a\x77\x2a\x2f\x38\x77\x6d\x6b\x6d\x6b\x68\x6c\x63\x62\x6a\x63\x6a\x62\x6a\x6a\x6d\x6d\x75\x68\x6e\x6c\x63\x6e\x6c\x62\x6d\x62\x6c";
    std::string decrypted;
    for (size_t i = 0; i < strlen(encrypted); ++i) {
        decrypted += encrypted[i] ^ 0x5A;
    }
    return env->NewStringUTF(decrypted.c_str());
}

