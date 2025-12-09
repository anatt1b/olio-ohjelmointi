#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>
using namespace  std;

// Periytytetään QObject
class MyClass : public QObject {
    Q_OBJECT

public:
    MyClass(QObject* parent = nullptr); //Konstruktori

    void raiseMySignal();   // Metodi signaalin lähetykseen

signals:
    void mySignal();    // Signaali ( lähetetään .cpp tiedostossa emit komennolla)

public slots:
    void mySlot();      // Slotti ( Kutsutaan signaalin jälkneen )
};

#endif // MYCLASS_H
