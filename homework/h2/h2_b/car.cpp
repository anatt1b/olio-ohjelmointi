#include "car.h"

Car::Car(string newBrand ,string newModel, int newYearmodel) {
    brand = newBrand;
    model = newModel;
    yearModel = newYearmodel;
}

void Car::printData(){
    cout << "Merkki: " << brand
         << ", Malli: " << model
         << ", Vuosimalli: " << yearModel << endl;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}
