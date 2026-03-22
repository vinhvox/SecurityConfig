package com.yourpackage.config

object SecureConfig {
    init {
        System.loadLibrary("secure")
    }

    external fun getBannerSplash(): String
    external fun getNativePermissionS2(): String
    external fun getAdjustRevenue(): String
    external fun getNativeObFullscreen(): String
    external fun getBannerAll(): String
    external fun getRewardHealth(): String
    external fun getAdjustToken(): String
    external fun getTermUrl(): String
    external fun getOpenSplash2f(): String
    external fun getInterSplash(): String
    external fun getNativePermission(): String
    external fun getNativeOb3(): String
    external fun getRewardMeasureAgain(): String
    external fun getInterOnboarding(): String
    external fun getFacebookClientToken(): String
    external fun getNativeLanguageS2(): String
    external fun getVinhvox(): String
    external fun getNativeOb2(): String
    external fun getNativeOb1(): String
    external fun getNativeHome(): String
    external fun getAppopenResume(): String
    external fun getPolicyUrl(): String
    external fun getNativeOb23Fullscreen(): String
    external fun getFacebookAppId(): String
    external fun getNativeLanguage(): String
    external fun getNativeOb12f(): String
    external fun getOpenSplash(): String
    external fun getAdAppId(): String
    external fun getBannerCollapHome(): String
    external fun getInterSplash2f(): String
    external fun getNativeAll(): String
    external fun getNativeLanguage2f(): String
    external fun getNativeLanguageS22f(): String
    external fun getAdjustPurchase(): String
    external fun getInterHome(): String
    external fun getInterBack(): String

    val BANNER_SPLASH by lazy { getBannerSplash() }
    val NATIVE_PERMISSION_S2 by lazy { getNativePermissionS2() }
    val ADJUST_REVENUE by lazy { getAdjustRevenue() }
    val NATIVE_OB_FULLSCREEN by lazy { getNativeObFullscreen() }
    val BANNER_ALL by lazy { getBannerAll() }
    val REWARD_HEALTH by lazy { getRewardHealth() }
    val ADJUST_TOKEN by lazy { getAdjustToken() }
    val TERM_URL by lazy { getTermUrl() }
    val OPEN_SPLASH_2F by lazy { getOpenSplash2f() }
    val INTER_SPLASH by lazy { getInterSplash() }
    val NATIVE_PERMISSION by lazy { getNativePermission() }
    val NATIVE_OB3 by lazy { getNativeOb3() }
    val REWARD_MEASURE_AGAIN by lazy { getRewardMeasureAgain() }
    val INTER_ONBOARDING by lazy { getInterOnboarding() }
    val FACEBOOK_CLIENT_TOKEN by lazy { getFacebookClientToken() }
    val NATIVE_LANGUAGE_S2 by lazy { getNativeLanguageS2() }
    val VINHVOX by lazy { getVinhvox() }
    val NATIVE_OB2 by lazy { getNativeOb2() }
    val NATIVE_OB1 by lazy { getNativeOb1() }
    val NATIVE_HOME by lazy { getNativeHome() }
    val APPOPEN_RESUME by lazy { getAppopenResume() }
    val POLICY_URL by lazy { getPolicyUrl() }
    val NATIVE_OB23_FULLSCREEN by lazy { getNativeOb23Fullscreen() }
    val FACEBOOK_APP_ID by lazy { getFacebookAppId() }
    val NATIVE_LANGUAGE by lazy { getNativeLanguage() }
    val NATIVE_OB1_2F by lazy { getNativeOb12f() }
    val OPEN_SPLASH by lazy { getOpenSplash() }
    val AD_APP_ID by lazy { getAdAppId() }
    val BANNER_COLLAP_HOME by lazy { getBannerCollapHome() }
    val INTER_SPLASH_2F by lazy { getInterSplash2f() }
    val NATIVE_ALL by lazy { getNativeAll() }
    val NATIVE_LANGUAGE_2F by lazy { getNativeLanguage2f() }
    val NATIVE_LANGUAGE_S2_2F by lazy { getNativeLanguageS22f() }
    val ADJUST_PURCHASE by lazy { getAdjustPurchase() }
    val INTER_HOME by lazy { getInterHome() }
    val INTER_BACK by lazy { getInterBack() }
}
