#include "person.h"

int Person::nextNr = 1000;
int Person::personenanzahl = 0;

Person::Person(string v, string n) {
    vorname = v;
    nachname = n;
    kundenNr = nextNr;
    nextNr++;
    personenanzahl++;
}

int Person::getKundenNr() { return kundenNr; }
string Person::getVorname() { return vorname; }
string Person::getNachname() { return nachname; }
string Person::fullname() { return vorname + " " + nachname; }

int Person::getPersonenanzahl() {
    return personenanzahl;
}
