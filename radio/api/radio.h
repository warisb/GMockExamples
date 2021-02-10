#pragma once

class Radio
{
public:
    void on();
    void off();
    void volume(int vol);

private:
    bool m_on = false;
    int m_volume = 0;
};
