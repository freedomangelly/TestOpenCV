//
// Created by freed on 2019/9/28.
//

#ifndef TESTOPENCV_BIMMAP_UTIL_H
#define TESTOPENCV_BIMMAP_UTIL_H

#include <jni.h>
#include "../../../../../../Android/sdk/ndk-bundle/toolchains/llvm/prebuilt/windows-x86_64/sysroot/usr/include/jni.h"

class bitmap_util{
    static jobject  create_bitmap(JNIEnv *env,int width,int height,int type);
};


#endif //TESTOPENCV_BIMMAP_UTIL_H
