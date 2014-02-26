#include <jni.h>
#include <com_example_androidndk_MainActivity.h>

JNIEXPORT jstring JNICALL Java_com_example_androidndk_MainActivity_getMessage (JNIEnv *env, jobject this){
	return (*env)->NewStringUTF(env, "Hola victor");
}
