cmake_minimum_required(VERSION 3.25)

project(skeleton VERSION 1.0
    DESCRIPTION "cpp cmake skeleton"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(PACKAGE_TESTS "Build the tests" ON)
if (PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(external/googletest)

    add_executable(tests tests/unittests.cpp)
    target_include_directories(tests PUBLIC include)
    target_link_libraries(tests gtest gtest_main gmock_main skeletonlib)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif()

find_package(Boost)
message(STATUS "Boost version: ${Boost_VERSION}")
message(STATUS "Boost_INCLUDE_DIRS=${Boost_INCLUDE_DIRS}")

add_library(skeletonlib STATIC src/skeletonlib.cpp include/skeleton/lib.hpp)
target_include_directories(skeletonlib PUBLIC include ${Boost_INCLUDE_DIR})
target_compile_features(skeletonlib PUBLIC cxx_std_17)

add_executable(skeleton apps/skeleton.cpp)
target_link_libraries(skeleton PUBLIC skeletonlib)

