#include <car.h>
#include <radio.h>

Car::Car(std::string make, std::string model)
    : m_make(std::move(make))
    , m_model(std::move(model))
{}

std::string Car::make() const
{
    return m_make;
}
std::string Car::model() const
{
    return m_model;
}
void Car::accelerate(float /*accel*/)
{
    // Some real complicated logic
}
void Car::brake(float /*decel*/)
{
    // Some real complicated logic
}

void Car::reverse()
{
    // When reversing, turn the radio down
    m_radio->volume(10);

    // Placeholder for real reversing logic
}

Car::~Car() = default;
