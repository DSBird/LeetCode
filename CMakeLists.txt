cmake_minimum_required(VERSION 3.5)
project(LeetCode)

include_directories(easy/include)
include_directories(easy/src)

add_executable(LeetCode ${PROJECT_SOURCE_DIR}/easy/src/problems.cpp)
