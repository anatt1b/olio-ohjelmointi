#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car car1; // olio pinomuistissa

    car1.setBrand("Opel");
    car1.setModel("Kadett");
    car1.setYearModel(1988);

    car1.printData();

    return 0;
}
