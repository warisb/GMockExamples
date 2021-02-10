# GMock Examples

This repository contains examples of using GMock using link-seaming method. The only existing example at the moment, `test_car`, is based off a niche feature I noticed in an SUV I rode in: the radio quiets down whenever you're reversing the car. This example shows how to unit test the car without bothering with the details of the radio.

## Prerequisites
Please install googletest as per the instructions in https://github.com/google/googletest

## Build
```
mkdir build
cd build
cmake <path to this project's source dir>
cmake --build .
```

## Test
./car/test/test_car
