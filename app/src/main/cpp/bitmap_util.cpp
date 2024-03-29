//
// Created by freed on 2019/9/28.
//
#include "bitmap_util.h"
#include "opencv2/opencv.hpp"
#include <android/log.h>


jobject bitmap_util::create_bitmap(JNIEnv *env,int width,int height,int type){
    char* config_name;
    if(type==CV_8UC4){
        config_name = "ARGB_8888";
    }

    jstring configName=env->NewStringUTF(config_name);
    const char* bitmap_config_class_name = "android/graphics/Bitmap$Config";
    jclass bitmap_config_class = env->FindClass(bitmap_config_class_name);
    const char* valueOf_sig = "(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;";
    jmethodID create_bitmap_config_mid = env->GetStaticMethodID(bitmap_config_class,"valueOf",valueOf_sig);
    jobject config = env->CallStaticObjectMethod(bitmap_config_class,create_bitmap_config_mid,configName);

    // 怎么去创建 bitmap？
    // 获取 java 层的方法
    // public static Bitmap createBitmap(int width, int height, @NonNull Config config)
    const char* bitmap_class_name = "android/graphics/Bitmap";
    jclass bitmap_class = env->FindClass(bitmap_class_name);
    const char* create_bitmap_sig = "(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;";
    jmethodID create_bitmap_mid = env->GetStaticMethodID(bitmap_class,"createBitmap",create_bitmap_sig);
    jobject bitmap = env ->CallStaticObjectMethod(bitmap_class,create_bitmap_mid,width,height,config);
    return bitmap;
};