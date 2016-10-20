#include <stdio.h>
#include <jni.h> 
jstring Java_com_example_lijh_newndk_MainActivity_hello(JNIEnv* env,jobject obj){
    // 2 步 实现C代码
    // 返回一个java String 类型的字符串
    //jstring     (*NewStringUTF)(JNIEnv*, const char*);
    //(*env) 相当于 JNINativeInterface* JNIEnv
    //*(*env)  相当于 JNINativeInterface
    ///return (**env).NewStringUTF(env,"helloworldfromc");
    return  (*env)->NewStringUTF(env,"Hello world");
}