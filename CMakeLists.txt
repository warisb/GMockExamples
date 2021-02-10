cmake_minimum_required(VERSION 3.5)

project(GMockExamples LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_library(gmockLibs gmock REQUIRED)
find_path(gmockIncludes gmock/gmock.h REQUIRED)

add_library(GMockTarget STATIC IMPORTED)

set_target_properties(GMockTarget
  PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES ${gmockIncludes}
    INTERFACE_SYSTEM_INCLUDE_DIRECTORIES ${gmockIncludes}
    IMPORTED_LOCATION ${gmockLibs}
    INTERFACE_LINK_LIBRARIES "gmock;gmock_main;gtest;gtest_main"
)

add_executable(car-app
    main.cpp)

add_subdirectory(radio)
add_subdirectory(car)

target_link_libraries(car-app PRIVATE car)
