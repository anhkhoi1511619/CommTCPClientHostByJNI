#include <jni.h>        
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>      
#include "com_mycompany_app_App.h"   
char* systemTest(); 
// Implementation of the native method sayHello()
JNIEXPORT jstring JNICALL Java_com_mycompany_app_App_sayHello(JNIEnv *env, jobject){
   return (*env)->NewStringUTF(env, systemTest());
}

/*
 * Class:     com_mycompany_app_App
 * Method:    connect
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mycompany_app_App_connect
  (JNIEnv *, jobject, jstring IP, jint port) {
  return JNI_TRUE;
}

/*
 * Class:     com_mycompany_app_App
 * Method:    send
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mycompany_app_App_send
  (JNIEnv *, jobject, jbyteArray data) {
  return JNI_TRUE;
}

/*
 * Class:     com_mycompany_app_App
 * Method:    receive
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_mycompany_app_App_receive
  (JNIEnv *env, jobject){
      // Dữ liệu byte cần trả về
    //unsigned char data[] = {0x02, 0x00, 0x03, 0xFD, 0x90, 0x00, 0x00, 0x70, 0x03};

    // Tạo chuỗi hexadecimal từ mảng byte
    //char hexString[sizeof(data) * 2 + 1]; // Mỗi byte = 2 ký tự hex + null terminator
    //for (int i = 0; i < sizeof(data); i++) {
    //    sprintf(&hexString[i * 2], "%02X", data[i]); // Chuyển mỗi byte thành 2 ký tự hex
    //}
    //hexString[sizeof(data) * 2] = '\0'; // Kết thúc chuỗi

    // Tạo jstring từ chuỗi hexadecimal
    //return (*env)->NewStringUTF(env, hexString);
            // Dữ liệu byte cần trả về
    unsigned char data[] = {0x02, 0x00, 0x03, 0xFD, 0x90, 0x00, 0x00, 0x70, 0x03};

    // Tạo mảng jbyteArray với kích thước tương ứng
    jbyteArray byteArray = (*env)->NewByteArray(env, sizeof(data));

    // Gán giá trị của mảng C vào mảng jbyteArray
    (*env)->SetByteArrayRegion(env, byteArray, 0, sizeof(data), (jbyte*)data); 
    
   return byteArray;
}

/*
 * Class:     com_mycompany_app_App
 * Method:    close
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mycompany_app_App_close
  (JNIEnv *, jobject) {
  return JNI_TRUE;
}


char* systemTest() {
  //int v = system (NULL);
  //String ret = v ? "" : "not";
  return "Shell is %s available\n";
}
