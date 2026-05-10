cmake_minimum_required(VERSION 3.21)

# Keep C++20 but add the fix for the {fmt} library
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(quantavious2012.test_mod VERSION 1.0.0)

# This line is CRITICAL to fix the error in your last screenshot
add_definitions(-DFMT_USE_CONSTEXPR=0 -DFMT_HEADER_ONLY)

set(SOURCES src/main.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK!")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

target_link_libraries(${PROJECT_NAME} libgeode)

setup_geode_mod(quantavious2012.test_mod)
