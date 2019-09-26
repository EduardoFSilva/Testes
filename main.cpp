#include <jni.h>
#include <stdio.h>
#include <nativecalc.h>
#include <string.h>

JNIEXPORT jfloat JNICALL Java_NativeCalc_add(JNIEnv* env, jobject obj, jfloat val1, jfloat val2) {
    return val1 + val2;
}

JNIEXPORT jfloat JNICALL Java_NativeCalc_subtract(JNIEnv* env, jobject obj, jfloat val1, jfloat val2) {
    return val1 - val2;
}

JNIEXPORT jfloat JNICALL Java_NativeCalc_multiply(JNIEnv* env, jobject obj, jfloat val1, jfloat val2) {
    return val1 * val2;
}

JNIEXPORT jfloat JNICALL Java_NativeCalc_divide(JNIEnv* env, jobject obj, jfloat val1, jfloat val2) {
    return val1 / val2;
}
