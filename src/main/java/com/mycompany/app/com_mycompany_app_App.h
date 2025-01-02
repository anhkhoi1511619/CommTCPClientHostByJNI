/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mycompany_app_App */

#ifndef _Included_com_mycompany_app_App
#define _Included_com_mycompany_app_App
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mycompany_app_App
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mycompany_app_App_sayHello
  (JNIEnv *, jobject);

/*
 * Class:     com_mycompany_app_App
 * Method:    connect
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_mycompany_app_App_connect
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_mycompany_app_App
 * Method:    send
 * Signature: (I[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mycompany_app_App_send
  (JNIEnv *, jobject, jint, jbyteArray);

/*
 * Class:     com_mycompany_app_App
 * Method:    receive
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_mycompany_app_App_receive
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mycompany_app_App
 * Method:    close
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mycompany_app_App_close
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
