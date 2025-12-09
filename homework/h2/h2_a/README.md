#
Tässä harjoituksessa opiskellaan olio-ohjelmoinnin perusteita, kuten luokan luominen, oloiden luominen ja käyttö. Materiaalissa tähän harjoitukseen liityvät asiat:


  - Olio-ohjelmointi
  - Getter ja Setter
  - private, public, protected
  - Olio
  - Smart pointer
  - Muodostin
---
Tee jokaiselle luokalle oma .h- ja .cpp-tiedosto. Noudata kussakin luokassa periaatetta

   - jäsenmuuttujat ovat privaatteja
   - metodit ovat publikkeja
---
## CAR-LUOKKA

Lisää projektiin luokka nimeltä **Car**. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

**JÄSENMUUTTUJAT:**
      
- **brand:** merkkijono, joka sisältää auton merkin.    
- **model:** merkkijono, joka sisältää auton mallin.
- **yearModel:** kokonaisluku, joka sisältää auton valmistusvuoden.

**METODIT:**

- **printData():** tulostaa auton merkin, mallin ja valmistusvuoden.
- **setBrand(string):** asettaa auton merkin.
- **setModel(string):** asettaa auton mallin.
- **setYearModel(int):** asettaa auton valmistusvuoden.

**PÄÄOHJELMASSA:**

   Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi.
   Tulosta auton tiedot käyttämällä printData()-metodia.

---
## RECTANGLE-LUOKKA

Lisää projektiin luokka nimeltä nimeltä Rectangle. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

**JÄSENMUUTTUJAT:**

- **width:** reaaliluku(double), joka määrittää suorakulmion leveyden.
- **height:** reaaliluku(double), joka määrittää suorakulmion korkeuden.
  
**METODIT:**
       
- **getArea():** laskee ja palauttaa suorakulmion pinta-alan kaavalla width * height.
- **getCircum():** laskee ja palauttaa suorakulmion ympärysmitan kaavalla 2 * (width + height).
- **setWidth(double):** asettaa suorakulmion leveyden.
- **setHeight(double):** asettaa suorakulmion korkeuden.

**PÄÄOHJELMASSA:**

   Luo Rectangle-olio kekomuistiin ja aseta sen leveys ja korkeus.
   Tulosta suorakulmion pinta-ala ja ympärysmitta.
   Tuhoa olio.


---

## STUDENT-LUOKKA

Lisää projektiin luokka nimeltä Student. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

Käytä tässä harjoituksessa hyväksesi Qt-Creatorin Refactor toimintoa. Kun olet luonut jäsen muuttujat, klikkaa hiiren oikealla ja valitse "Add Getter and Setter ...".

**JÄSENMUUTTUJAT:**

- **name:** merkkijono, joka sisältää opiskelijan nimen.
- **studentNumber:** kokonaisluku, joka sisältää opiskelijanumeron.
- **average:** reaaliluku, joka sisältää opiskelijan keskiarvon.
   
**METODIT:**
- **Setterit:**
    - **setName(string):** asettaa opiskelijan nimen.
    - **setStudentNumber(int):** asettaa opiskelijanumeron.
    - **setAverage(double):** asettaa opiskelijan keskiarvon.
- **Getterit:**
    - **string getName():** palauttaa opiskelijan nimen.
    - **int getStudentNumber():** palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
    - **double getAverage():** palauttaa opiskelijan keskiarvon.

**PÄÄOHJELMASSA:**

   Luo Student-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja keskiarvo.
   Tulosta opiskelijan tiedot käyttämällä get-metodeja
