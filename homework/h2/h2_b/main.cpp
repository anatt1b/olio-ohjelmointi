#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carlist;
    // Oliot listaaN
    carlist.emplace_back("Toyota", "Starlet", 1999);
    carlist.emplace_back("Ford", "Mondeo", 2015);
    carlist.emplace_back("Chrysler", "Voyager", 2000);

    // toinen alkio listasta
    cout <<"********************************************************************"<< endl;
    cout << endl;
    cout << "Listan toinen alkio: ";
    cout << "- ";
    carlist[1].printData();
    cout << endl;
    cout <<"********************************************************************"<< endl;


    // Kaikki alkiot
    cout << endl;
    for(int x=0 ; x < 3; x++){
        cout << "- ";
        carlist[x].printData();
        cout << endl;
    }
    return 0;
}
