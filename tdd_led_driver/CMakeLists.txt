cmake_minimum_required(VERSION 3.14)
project(my_project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
#FetchContent_MakeAvailable(googlemock)

enable_testing()

add_executable(
    led_driver_test
    ${CMAKE_CURRENT_SOURCE_DIR}/src/LedDriver.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/test/LedDriverTest.cc 
    ${CMAKE_CURRENT_SOURCE_DIR}/test/MockRuntimeError.cc 
)

target_include_directories(led_driver_test PUBLIC 
                           ${CMAKE_CURRENT_SOURCE_DIR}/include
                           ${CMAKE_CURRENT_SOURCE_DIR}/test
                           )

target_link_libraries(
    led_driver_test
    #GTest::gtest_main
    gtest_main
    gmock_main
)

#enable CMake’s test runner to discover the tests included in the binary, 
#using the GoogleTest CMake module.
include(GoogleTest)
gtest_discover_tests(led_driver_test)

