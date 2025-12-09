#include "car.h"

Car::Car(){}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printData(){
    cout << "Merkki: "<< brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}
