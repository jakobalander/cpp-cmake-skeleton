cmake_minimum_required(VERSION 3.25)

project(skeleton VERSION 1.0
    DESCRIPTION "cpp cmake skeleton"
    LANGUAGES CXX)

add_library(skeletonlib STATIC src/skeletonlib.cpp include/skeleton/lib.hpp)
target_include_directories(skeletonlib PUBLIC include)
target_compile_features(skeletonlib PUBLIC cxx_std_17)

add_executable(skeleton apps/skeleton.cpp)
target_link_libraries(skeleton PUBLIC skeletonlib)

