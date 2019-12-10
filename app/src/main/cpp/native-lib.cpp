#include <jni.h>
#include <string>
#include "config.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_wsy_cmakemultichannelpackage_Shape_nativeGetShape(JNIEnv *env, jclass clazz) {
    return env->NewStringUTF(getShape());
}