add_library(car
    api/car.h
    src/car.cpp)

target_include_directories(car
  PUBLIC
    api
  PRIVATE
    src
)

target_link_libraries(car
  PRIVATE
    radio
)

add_subdirectory(test)

