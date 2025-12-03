#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    //OSOITIN

    // Luo mainissa int muuttuja a ja anna arvoksi 5
    // Tulosta muuttujan a arvo ja osoite
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " <<  &a << endl;
    cout << endl;
    // Lisää osoitinmuuttuja pointerA ja sijoita siihen muuttujan a osoite ja
        // Tulosta osoittimen osoittaman muistipaikan osoite
        // Tulosta osoittimen osoittaman muistipaikan sisältö
    int *pointerA;
    pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << &pointerA << endl << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;
    cout << endl;

    // REFERENSSI

    //Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a ja
        //Tulosta refA:n osoittama osoite
        //Tulosta refA:n osoittaman muistipaikan sisältö

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: "<< &refA << endl << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

    // Lisää muuttuja int muuttuja b ja anna sen arvoksi 6.
    int b = 6;
    cout << "Muuttujan b arvo on: " << b << endl << "Muuttujan b osoite on: " << &b << endl;
    cout << endl;

    // Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen
    refA = b;

    cout << "muuttuja b refA:n kautta muuttujaan a" << endl;
    cout << "muuttujan a uusi aro: " << a << endl << "muuttuja a osoite edelleen: " << &a << endl;
    cout << "refA:n osoite edelleen: " << &refA << endl;
    cout << endl;

    // Kokeile voitko muuttaa pointerA:n osoittamaan b:n osoitteeseen

    pointerA = &b;

    cout << "pointerA siirretty osoittamaan muuttujaa b" << endl;
    cout << "pointerA osoittaa nyt: " << pointerA << endl << "pointerA:n osoittaman muistipaikan arvo: " << *pointerA << endl;
    cout << endl;

    // OLIO ARGUMENTTINA
    ClassB objB;
    objB.setInfo("Olion B asettana info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;
    cout << endl;

    // REFERENSSI ARGUMENTTINA
    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2 " << objA2.getBinfo() << endl;
    cout << endl;
    return 0;
}
