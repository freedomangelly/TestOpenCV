package com.example.testopencv.util;


/**
 * description:
 * author: freed on 2019/9/28
 * email: 674919909@qq.com
 * version: 1.0
 */
public class NDKBitmapUtil {

    static {
        System.loadLibrary("native-lib");
    }

    /**
     * 实现逆世界效果
     *
     * @param bitmap 原图像
     * @return 逆世界
     */
    public static final native Object againstWorld(Object bitmap);
    /**
     * 浮雕效果
     *
     * @param bitmap 原图像
     * @return 浮雕效果图像
     */
    public static final native Object anaglyph(Object bitmap);
    /**
     * 实现马赛克效果
     * @param bitmap 原图像
     * @return 马赛克图片
     */
    public static final native Object mosaic(Object bitmap);

    /**
     * 实现图片毛玻璃效果
     *
     * @param bitmap 原图像
     * @return 毛玻璃效果
     */
    public static final native Object groundGlass(Object bitmap);
    /**
     * 实现图像油画效果
     *
     * @param bitmap
     * @return 油画效果图像
     */
    public static final native Object oilPainting(Object bitmap);

    /**
     * 灰度图像处理效果
     * @param bitmap 原图像
     * @return 优化后的灰度图像
     */
    public static final native Object garyOptimize (Object bitmap);
    /**
     * 图片旋转 90 度
     *
     * @param bitmap 原图片
     * @return 旋转 90 度后的图片
     */
    public static final native Object rotation(Object bitmap);

    /**
     * reSize() 图片缩放
     * INTER_NEAREST - 最近邻插值
     * INTER_LINEAR - 线性插值（默认值）
     * INTER_AREA - 区域插值（利用像素区域关系的重采样插值）
     * INTER_CUBIC –三次样条插值（超过4×4像素邻域内的双三次插值）
     * INTER_LANCZOS4 -Lanczos插值（超过8×8像素邻域的Lanczos插值）
     * @param bitmap
     * @param width
     * @param height
     * @return
     */
    public static final native Object reSize(Object bitmap, int width, int height);

    public static final native Object warpAffine(Object bitmap);
    /**
     * 重映射，见图片反向显示
     *
     * @param bitmap 原图片
     * @return 重映射后的图片
     */
    public static final native Object reMap(Object bitmap);
}
