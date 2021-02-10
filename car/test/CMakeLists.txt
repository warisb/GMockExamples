add_executable(test_car
    car_test.cpp
)

target_sources(test_car
  PRIVATE
   "$<TARGET_OBJECTS:car>"
)

target_include_directories(test_car
  PRIVATE
    $<TARGET_PROPERTY:car,INCLUDE_DIRECTORIES>
)

target_link_libraries(test_car
  PRIVATE
    GMockTarget
    mock_radio
    pthread
)
