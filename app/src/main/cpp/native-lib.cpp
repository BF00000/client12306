#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_wcy_client12306_activity_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO
    std::string hello = "登录成功！";
    return env->NewStringUTF(hello.c_str());
}