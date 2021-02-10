#include <mock_radio.h>

namespace
{
    RadioMock* g_radioMock = nullptr;
};

RadioMock::RadioMock()
{
    g_radioMock = this;
}

RadioMock::~RadioMock()
{
    g_radioMock = nullptr;
}

void Radio::on()
{
    g_radioMock->on();
}
void Radio::off()
{
    g_radioMock->off();
}
void Radio::volume(int vol)
{
    g_radioMock->volume(vol);
}

