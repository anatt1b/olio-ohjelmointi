#include <iostream>
#include <memory>
#include "car.h"

using namespace std;

int main()
{

    Car *objectCar1=new Car("Toyota", "Carina", 2022);
    objectCar1->display();

    //Muista tuhota dynaamiset oliot
    delete objectCar1;
    objectCar1=nullptr;

    //smart pointer
    unique_ptr<Car> objectCar2 = make_unique<Car>("Volvo", "XC40", 2023);
    objectCar2->display();

    return 0;
}
