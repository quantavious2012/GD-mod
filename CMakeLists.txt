cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Change project name to match your ID exactly
project(quantavious2012.test_mod VERSION 1.0.0)

set(SOURCES main.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK!")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

# 2. This links the libraries to the project name above
target_link_libraries(${PROJECT_NAME} libgeode)

# 3. This sets up the mod using that same project name
setup_geode_mod(${PROJECT_NAME})
