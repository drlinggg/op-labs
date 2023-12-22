cmake_minimum_required(VERSION 3.26)
project(11lab C)

set(CMAKE_C_STANDARD 11)

add_executable(11lab main.c,
        header.h,
        funcs.h)
