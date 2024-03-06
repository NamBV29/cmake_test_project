cmake_minimum_required(VERSION 3.5)
project(TESTCMAKE
          VERSION 0.0.1)
#GLOBING
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(test.exe main.cpp ${SOURCE_FILES})

#Target          
#add_executable(test.exe main.cpp)

target_compile_features(test.exe PRIVATE cxx_std_20)
target_include_directories(test.exe PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
