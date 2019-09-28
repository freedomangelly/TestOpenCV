#include <jni.h>
#include <string>
#include <queue>
#include "com_example_testopencv_util_NDKBitmapUtil.h"
#include "cv_helper.h"

using namespace std;
using namespace cv;
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_testopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_againstWorld
        (JNIEnv *env, jclass type, jobject bitmap){
    Mat src;
    //将bitmap 转换成Mat
    int i=cv_helper::bitmap2mat(env,bitmap,src);

};


/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    anaglyph
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_anaglyph
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    mosaic
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_mosaic
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    groundGlass
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_groundGlass
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    oilPainting
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_oilPainting
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    garyOptimize
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_garyOptimize
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    rotation
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_rotation
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    reSize
 * Signature: (Ljava/lang/Object;II)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_reSize
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    warpAffine
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_warpAffine
        (JNIEnv *env, jclass type, jobject bitmap);

/*
 * Class:     com_example_testopencv_util_NDKBitmapUtil
 * Method:    reMap
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_example_testopencv_util_NDKBitmapUtil_reMap
        (JNIEnv *env, jclass type, jobject bitmap);
