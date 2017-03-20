cmake_minimum_required(VERSION 3.6)
project(haMacro)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp haMacro.h)
add_executable(haMacro ${SOURCE_FILES})