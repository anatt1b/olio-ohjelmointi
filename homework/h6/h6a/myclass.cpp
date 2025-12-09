#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
   // Yhdistetään signaali ja slotti
    connect(this, &MyClass::mySignal, this, &MyClass::mySlot);
}

void MyClass::raiseMySignal()
{
    emit mySignal();  // signaalin lähetys
}

void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";
}
