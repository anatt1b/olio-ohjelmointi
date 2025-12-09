# QT-Konsolisovellus

Luo projekti nimeltään h6b ja valitse nyt tyypiksi Application (Qt)->Qt Console Application

1. Tutki sovelluksen pro-tiedostoa ja main.cpp-tiedostoa
2. Lisää sovellukseen luokka ExampleClass (Qt Creatorin "Add New->C++ Class"). Kun luot luokan rastita
    - Include QObject
    - Add Q_OBJECT ja periytä ExampleClass luokasta QObject.
3. Vertaa tiedoston exampleclass.h tiedostoa edellisen tehtävän h-tiedostoon
4. Periytä ExampleClass luokasta QObject
5. Lisää luokkaan: (h-tiedostoon)
   1. public metodi void startToWait();
   2. signals osioon signaali void readyToSay();
   3. public slots osio ja siihen metodi void sayHelloSlot();
   4. Lisää #include < QThread >
   5. Lisää myös #include < QCoreApplication >, jos se puuttuu
   
6. Kirjoita metodien toteutukset (cpp-tiedostoon)
    1. startToWait() -metodiin seuraava koodi: 
    ```
        QThread::msleep(1000);
        emit readyToSay();
    ```

    2. sayHelloSlot() -metodiin seuraava koodi:
    
    ```
        qDebug()<<"Terve";
    ```
7. Kirjoita luokan muodostimeen rivit: 
```
        qDebug()<<"Start";
        connect... 
        qDebug()<<"End";
```
8. Muokkaa edellä tuota connect-riviä, niin että readyToSay-signaali yhdistetään slottiin sayHelloSlot. 
```
QObject::connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
```
9. Luo main.cpp:ssä luokan ExampleClass-olio ja kutsu sen metodia startToWait.
