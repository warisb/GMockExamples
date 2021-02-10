add_library(radio
    api/radio.h
    src/radio.cpp)

target_include_directories(radio
  PUBLIC
    api
  PRIVATE
    src
)

add_subdirectory(mock)
