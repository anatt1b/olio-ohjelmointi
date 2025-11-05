/*
1. Luo luokka Car, jolla on seuraavat yksityiset attribuutit: string make, string model ja int year. Kirjoita konstruktori, joka alustaa nämä attribuutit, ja metodi void display(), joka tulostaa auton tiedot.
2. Muokkaa Car-luokkaa edellisestä tehtävästä lisäämällä getter- ja setter-metodit jokaiselle attribuutille. Varmista, että asetettu data on validia (esim. vuoden tulee olla suurempi kuin 1885).
3. Lisää Car-luokkaan ylikuormitettu konstruktori, joka ottaa parametreina vain make ja model. Tässä tapauksessa year saa oletusarvon 2020. Käytä tätä ylikuormitettua konstruktoria olioiden luomiseen.
4.
*/


#include "car.h"

#include <iostream>
#include <memory>
#include <vector>

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
    //muutetaan vuosimalli
    objectCar2->setYear(2024);
    cout<<"Muokattu vuosimalli = "<< objectCar2 -> getYear() << endl;

    unique_ptr<Car> objectCar3 = make_unique<Car>("Ford", "Mondeo", 1650);
    objectCar3->display();

    unique_ptr<Car> objectCar4 = make_unique<Car>("Jaguar", "xc777");
    objectCar4->display();

    //oliolista
    cout<<""<<endl;
    cout<<"*****OLIOLISTA*****"<<endl;
    cout<<""<<endl;

    vector<Car> carList;
    // luodaan oliolista
    carList.emplace_back("Saab", "900", 1990);
    carList.emplace_back("Datsun", "100A", 1979);
    carList.emplace_back("Opel", "Manta", 1992);

    for(int i=0; i<=2; i++){
        cout<<"-";
        carList[i].display();
    }
    return 0;
}
