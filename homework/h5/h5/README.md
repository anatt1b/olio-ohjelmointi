
## Osoitin

1. Luo mainissa int muuttuja a ja anna arvoksi 5
2. Tulosta muuttujan a arvo ja osoite
3. Lisää osoitinmuuttuja pointerA ja sijoita siihen muuttujan a osoite ja
    - Tulosta osoittimen osoittaman muistipaikan osoite
    - Tulosta osoittimen osoittaman muistipaikan sisältö


## Referenssi

1. Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a ja
    - Tulosta refA:n osoittama osoite
    - Tulosta refA:n osoittaman muistipaikan sisältö
    
2. Lisää muuttuja int muuttuja b ja anna sen arvoksi 6.
3. Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen?
4. Kokeile voitko muuttaa pointerA:n osoittamaan b:n osoitteeseen?
    - Nyt sinun tulisi havaita mitä eroa on seuraavilla:
        - pointerA ja *pointerA
        - refA ja &refA

## Olio argumenttina

1. Lisää sovellukseen luokka ClassB, ja siihen
       - private string muuttuja nimeltään info
       - get ja set metodit muuttujalle info
2. Lisää sovellukseen luokka ClassA1
- header: 
```
    class ClassA1
    {
    private:
        ClassB objectB;
    public:
        ClassA1(ClassB); //Luodaan kopio ClassB-luokan oliosta
        string getBinfo();
        void setBinfo(string);
    };        
```

- cpp:
```
    ClassA1::ClassA1(ClassB value):objectB(value)
    {
    }
    
    string ClassA1::getBinfo()
    {
        return objectB.getInfo();
    }
    
    void ClassA1::setBinfo(string value)
    {
        objectB.setInfo(value);
    }
```
- main
```
    ClassB objB;
    objB.setInfo("Olion B asettama info");
    
    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");
    
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;
```

tehtävän tarkoitus on havainnollistaa, että alkuperäisen B-olion (objB) data ei muutu, vaikka muokkaat A1-olion dataa.

## Referenssi argumenttina

1. Lisää edelliseen trehtävään luokka ClassA2
- header: 
```
    class ClassA2
    {
    private:
        ClassB &refB;
    public:
        ClassA2(ClassB&); //Annetaan argumenttina B-luokan olion osoite
        string getBinfo();
        void setBinfo(string);
    };
```

- cpp:
```
    ClassA2::ClassA2(ClassB &value):refB(value)
    {
    }
    
    string ClassA2::getBinfo()
    {
        return refB.getInfo();
    }
    
    void ClassA2::setBinfo(string value)
    {
        refB.setInfo(value);
    }
```
- main:
```
    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;
```

Tehtävän tarkoitus on havainnollistaa, että myös alkuperäisen B-olion(objB) data muuttuu, kun muokkaat A2-olion dataa.

Tehtävässä voidaan siis havaita, että kun oliolle A annetaan argumenttina olio B, niin A ei voi vaikuttaa olion B dataan.
Jos oliolle A annetaan argumenttina olion B osoite, niin A:n muokkaus muuttaa B:n dataa.
