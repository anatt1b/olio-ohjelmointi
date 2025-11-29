#include <iostream>
#include "car.h"

using namespace std;



void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails() const
{
    cout << "Auto : "<< model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower()
         << " hp, " << objEngine.getDisplacement() << "L" << endl;

    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}

Car::Car() {
    model = "";
    brand = "";
}

Car::Car(string b, string m)
{
    brand = b;
    model = m;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("Kesärengas");

    objWheel2.setSize(17);
    objWheel2.setType("Kesärengas");

    objWheel3.setSize(17);
    objWheel3.setType("Kesärengas");

    objWheel4.setSize(17);
    objWheel4.setType("Kesärengas");
}

string Car::getModel() const
{
    return model;

}
