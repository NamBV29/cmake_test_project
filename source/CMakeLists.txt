cmake_minimum_required(VERSION 3.5)
project(TESTCMAKE
          VERSION 0.0.1)
add_executable(test.exe main.cpp)
target_compile_features(test.exe PRIVATE cxx_std_20)
