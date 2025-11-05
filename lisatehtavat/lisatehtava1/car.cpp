#include "car.h"

Car::Car() {}

Car::Car(string _make, string model, int year)
{
    this->make=make;
    this->model=model;
    this->year=year;
}

void Car::display()
{
    cout<<"Auton tiedot:"<<endl;
    cout<<"Merkki: "<<this->make<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Vuosimalli: "<<this->year<<endl;
    cout<<"****************************"<<endl;
}

Car::~Car()
{
    cout<<"Olio tuhottu"<<endl;
    cout<<"****************************"<<endl;
}
