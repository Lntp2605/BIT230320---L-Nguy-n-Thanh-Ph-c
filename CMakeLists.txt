cmake_minimum_required(VERSION 4.2)
project(C)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)
add_executable(bt1 BT1/bt1.cpp
        BT2/bt2.1.cpp
        BT2/bt2.2_2.3_2.4.cpp)