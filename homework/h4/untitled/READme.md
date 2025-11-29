# Harjoitus4 (kompositio)
Sovelluksen luokkakaavio on seuraava:


<img width="479" height="658" alt="UML-kaavio" src="https://github.com/user-attachments/assets/460bfd06-02f2-4486-bc1f-1db1669d2e41" />


Tässä tehtävässä tarkoituksena on mallintaa yksinkertainen auton rakenne C++:ssa käyttämällä kompositiota. Sinun tulee luoda luokat Engine, Wheel ja Car, ja yhdistää nämä osat luokkaan Car komposition avulla.

---

1. Luokan Engine toteutus:

   - Lisää projektiin luokka Engine, joka sisältää seuraavat ominaisuudet:
        - int horsepower: moottorin hevosvoimat.
        - double displacement: moottorin tilavuus litroissa.
   - Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.

2. Luokan Wheel toteutus:

   - Lisää projektiin luokka Wheel, joka sisältää seuraavat ominaisuudet:
      -  int size: renkaan koko (esim. tuumina).
      -  string type: renkaan tyyppi (esim. "kesärengas" tai "talvirengas").
   - Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.

3. Luokan Car toteutus:

   - Lisää projektiin luokka Car, joka koostuu seuraavista osista:
     -   Yksi Engine-olio.
      -  Neljä Wheel-oliota.
      -  string model: auton malli.
      -  string brand: auton merkki.
   - Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.
   Aseta metodissa setEngine moottorille ominaisuudet: hevosvoimia=150 ja moottorintilavuus=2.0
   Aseta metodissa setWheels, kullekin renkaalle ominaisuudet: koko=17 ja tyyppi=kesarengas
   Toteuta metodi void printDetails(), joka tulostaa auton tiedot, mukaan lukien moottorin ja renkaiden tiedot (katso mallia esimerkkitulosteesta alla).

Pääohjelma:

   - Luo mainissa:
      -  Car-olio (brand Toyota ja model Corolla)
      -  Kutsu Car-olion setEngine metodia
       - Kutsu Car-olion setWheels metodia
