#include "car.h"
#include "rectangle.h"

#include <iostream>

using namespace std;

int main()
{
    Car car1; // olio pinomuistissa

    car1.setBrand("Opel");
    car1.setModel("Kadett");
    car1.setYearModel(1988);

    car1.printData();

    cout << endl;
    cout << "******************" << endl;
    cout << endl;

    Rectangle *rect = new Rectangle; // olio kekomuistissa (muista tuhota)
    rect -> setWidth(7.2);
    rect -> setHeight(3.1);

    //pinta-ala
    cout << "Pinta-ala: " << rect->getArea() << endl;
    //ympärysmitta
    cout << "Ympärysmitta: " << rect->getCircum() << endl;

    // tuhotaan olio
    delete rect;
    rect = nullptr;


}
