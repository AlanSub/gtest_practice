cmake_minimum_required(VERSION 2.8.9)
project(circular-buffer-test)

set(PROJECT_LINK_LIBS libgtest.a libgtest_main.a) 
link_directories(/usr/lib)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11 -pthread")

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_executable(circular-buffer-test ${SOURCES})

target_link_libraries(circular-buffer-test ${PROJECT_LINK_LIBS})

message("CMAKE_CXX_FLAGS is ${CMAKE_CXX_FLAGS}")
message("CMAKE_CXX_FLAGS_DEBUG is ${CMAKE_CXX_FLAGS_DEBUG}")
message("CMAKE_CXX_FLAGS_RELEASE is ${CMAKE_CXX_FLAGS_RELEASE}")


