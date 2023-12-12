import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.kotlinCocoapods)
}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    val iosStrings = ios.versions.ios
    val xcf = XCFramework()
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            export(libs.kotlin.stdlib)
            xcf.add(this)
            baseName = iosStrings.basename.get()
        }
    }

    cocoapods {
        name = iosStrings.basename.get()
        summary = iosStrings.summary.get()
        authors = iosStrings.authors.get()
        version = libs.versions.library.version.get()
        ios.deploymentTarget = iosStrings.deployment.target.get()
        framework {
            baseName = iosStrings.basename.get()
            isStatic = false
        }
        specRepos {
            url("https://github.com/saeed-rz/YAWAShared.git")
        }
        publishDir = rootProject.file("./")
    }

    sourceSets {
        commonMain.dependencies {
            //put your multiplatform dependencies here
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }
    }
}

android {
    namespace = "saeedrz.yawa"
    compileSdk = 34
    defaultConfig {
        minSdk = 24
    }
}