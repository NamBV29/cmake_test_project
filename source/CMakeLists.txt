cmake_minimum_required(VERSION 3.5)
project(TESTCMAKE
          VERSION 0.0.1)

set(CXX_STANDARD_REQUIRED ON) # thiet lap chuan  C++ cho cac target
set(CMAKE_CXX_STANDARD 20) # chuan C++ 20
#GLOBING
#file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
#add_executable(test.exe main.cpp ${SOURCE_FILES})

#static library
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_compile_features(operations PUBLIC cxx_std_20)

#Target          
add_executable(test.exe main.cpp src/dog.cpp)

#target_compile_features(test.exe PRIVATE cxx_std_20)
target_include_directories(test.exe PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(test.exe PUBLIC operations)