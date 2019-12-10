cmake_minimum_required(VERSION 3.4.1)

# SHAPE 就是在build.gradle中传来的参数，这里只是修改依赖的头文件
include_directories(src/${SHAPE}/cpp)

# 这里未修改C++代码路径，实际情况可以对源文件路径进行修改，
# 如：src/${SHAPE}/cpp/xxx.cpp
add_library(
        native-lib
        SHARED
        src/main/cpp/native-lib.cpp)

find_library(
        log-lib
        log)

target_link_libraries(
        native-lib
        ${log-lib})