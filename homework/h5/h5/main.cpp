#include <iostream>

using namespace std;

int main()
{
    // Luo mainissa int muuttuja a ja anna arvoksi 5
    // Tulosta muuttujan a arvo ja osoite
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " <<  &a << endl;

    // Lisää osoitinmuuttuja pointerA ja sijoita siihen muuttujan a osoite ja
        // Tulosta osoittimen osoittaman muistipaikan osoite
        // Tulosta osoittimen osoittaman muistipaikan sisältö
    int *pointerA;
    pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << &pointerA << endl << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    //Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a ja
        //Tulosta refA:n osoittama osoite
        //Tulosta refA:n osoittaman muistipaikan sisältö

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: "<< &refA << endl <<"refA:n osoittaman muistipaikan arvo on: " << refA << endl;


    return 0;
}
