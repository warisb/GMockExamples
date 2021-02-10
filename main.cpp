#include <car.h>

using namespace std;

int main()
{
    Car car("Toyota", "Camry");
    car.accelerate(100.0);
    car.brake(100.0);
    car.reverse();
    return 0;
}
