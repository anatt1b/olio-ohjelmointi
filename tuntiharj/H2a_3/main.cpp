#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    Henkilo objPerson1("Teppo Teurastaja", 5);
    objPerson1.printData();

    // jos haluat että olion voi luoda myös kuten all
    // on Henkilo luokkaan lisättävä myös tyhjä konstruktori
    Henkilo objPerson2;
    objPerson2.setName("Liisa Letunpieksaja");
    objPerson2.setAge(72);
    objPerson2.printData();

    //dynaaminen olio
    Henkilo *objPerson3 = new Henkilo("Aino Virta", 34);
    objPerson3->printData();
    delete objPerson3;
    objPerson3=nullptr;


    return 0;
}
