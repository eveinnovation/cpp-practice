cmake_minimum_required(VERSION 3.16)
project(c_examples)

set(CMAKE_CXX_STANDARD 14)

add_library(lotto functions/lotto.cpp)
add_library(arrfun functions/array/arrfun.cpp)
add_executable(c_examples functions/recursion/ruler.cpp)
