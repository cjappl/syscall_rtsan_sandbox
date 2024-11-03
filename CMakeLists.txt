cmake_minimum_required(VERSION 3.5)
project(HelloWorld)

set(CMAKE_CXX_COMPILER /Users/topher/code/radsan_cjappl/llvm-project/build/bin/clang++)
set(CMAKE_C_COMPILER /Users/topher/code/radsan_cjappl/llvm-project/build/bin/clang)

add_executable(libcProbe main.cpp)

target_compile_options(libcProbe PRIVATE 
  -g3
  -O0
)

