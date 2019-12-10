package com.wsy.cmakemultichannelpackage;

public class Shape {
    public static native String nativeGetShape();
    public static String javaGetShape(){
        return "circle";
    }
}
