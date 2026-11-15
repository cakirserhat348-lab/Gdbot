cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
project(GDBot)

include(FetchContent)
FetchContent_Declare(geode GIT_REPOSITORY https://github.com/geode-sdk/geode.git GIT_TAG main)
FetchContent_MakeAvailable(geode)

add_library(GDBot SHARED main.cpp)
target_link_libraries(GDBot PRIVATE Geode::Geode)
geode_package(GDBot)
