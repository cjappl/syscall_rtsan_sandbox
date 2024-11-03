cmake_minimum_required(VERSION 3.5)
project(LibcProbe)

add_executable(libcProbe main.cpp)

target_compile_features(libcProbe PRIVATE cxx_std_23)

target_compile_options(libcProbe PRIVATE 
  -g3
  -O0
)

