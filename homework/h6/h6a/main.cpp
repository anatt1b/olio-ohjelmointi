#include "myclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass obj;  // Olion luonti
    obj.raiseMySignal();  // Signaalin käynnistys


    return a.exec();
}
