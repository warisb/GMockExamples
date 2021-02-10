#pragma once

#include <gmock/gmock.h>
#include <radio.h>

class RadioMock
{
public:
    RadioMock();
    ~RadioMock();

    MOCK_METHOD(void, on, ());
    MOCK_METHOD(void, off, ());
    MOCK_METHOD(void, volume, (int vol));
};
