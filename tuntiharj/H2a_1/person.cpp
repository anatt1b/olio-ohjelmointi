#include "person.h"
#include <iostream>

using namespace std;

Person::Person() {
    cout << "Olio luotiin"<< endl;
}

Person::~Person(){
    cout<<"Olio tuhottu"<<endl;
}
