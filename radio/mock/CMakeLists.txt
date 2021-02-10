add_library(mock_radio
    mock_radio.h
    mock_radio.cpp)

target_include_directories(mock_radio
  PUBLIC
    .
    ../api
)

target_link_libraries(mock_radio
  PUBLIC
    GMockTarget
)
