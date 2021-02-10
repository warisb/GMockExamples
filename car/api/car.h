#pragma once

#include <memory>
#include <string>

class Radio;

class Car
{
public:

    Car(std::string make, std::string model);

    ~Car(); // Need to defer definition for fwd decl

    std::string make() const;
    std::string model() const;
    void accelerate(float accel);
    void brake(float decel);
    void reverse();

private:
    std::string m_make;
    std::string m_model;
    std::unique_ptr<Radio> m_radio;
};
