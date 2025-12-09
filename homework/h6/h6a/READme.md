# QT-konsolisovellus



## Second Level Heading

Paragraph.

1. Muokkaa .pro-tiedostoa:
    - Lisää rivi QT = core
    - Poista rivi CONFIG -= qt
2. Lisää luokka MyClass
3. Muokkaa myclass.h muotoon:

```
#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace  std;

class MyClass : public QObject {
    Q_OBJECT

public:
    MyClass(QObject* parent = nullptr);

    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif // MYCLASS_H
```

4. Muokkaa MyClass.cpp muotoon: 
```
#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {

    connect(this, &Myclass::mySignal, this, &Myclass::mySlot);
}

void MyClass::raiseMySignal()
{
    emit mySignal();
}

void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin";
}
```


5. Luo main.cpp olio luokasta MyClass ja kutsu sen metodia raiseMySignal

## Huomioita sovelluksesta

Edellä haluttiin käyttää luokassa MyClass Qt:n signal/slot mekanismia, joten

- MyClass luokan tulee periä luokka QObject
- MyClass luokassa tulee suorittaa Q_OBJECT makro
- MyClass luokan konstruktori MyClass(QObject* parent = nullptr), mahdollistaa sen, että luokan oliolle voidaan asettaa ns. parent olio(*)
- lauseella: 
    -    emit mySignal(); "nostetaan" mySignal, niminen signaali
- lauseella:
    -    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
    -   mySignal kytketään slottiin mySLOT

