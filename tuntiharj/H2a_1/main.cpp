#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    // Luodaan olio pinoon (stack)
    // ns. automaattinen olio
    // olio tuhoutuu automaattisesti
    Person objPerson;
    objPerson.ika = 27;
    objPerson.nimi = "Teppo Testi";
    cout << objPerson.nimi << " on " << objPerson.ika << " vuotias" << endl;

    // luodaan olio kekoon (heap)
    // meidän tulee tuhota olio, kun sitä ei tarvita
    Person *objPerson2;
    objPerson2 = new Person();
    objPerson2 ->ika = 33;
    objPerson2 ->nimi = "Liisa Joki";
    cout << objPerson2->nimi<< " on " << objPerson2->ika <<" vuotias"<< endl;
    delete objPerson2;
    objPerson2 = nullptr;
    return 0;
}
