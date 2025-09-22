#include "person.h"

int Person::nextNr = 1000;
int Person::personenanzahl = 0;

Person::Person(string v, string n) {
    vorname = v;
    nachname = n;
    status = 'A';
    lastVisit = chrono::system_clock::now();
    kundenNr = nextNr;
    nextNr++;
    personenanzahl++;
}

int Person::getKundenNr() { return kundenNr; }
string Person::getVorname() { return vorname; }
string Person::getNachname() { return nachname; }
string Person::fullname() { return vorname + " " + nachname; }
char Person::getStatus() { return status; }
void Person::setStatus(char s) { status = s; }

void Person::updateLastVisit() {
    lastVisit = chrono::system_clock::now();
}

long Person::daysSinceLastVisit() {
    auto now = chrono::system_clock::now();
    auto diff = chrono::duration_cast<chrono::hours>(now - lastVisit).count() / 24;
    return diff;
}

int Person::getPersonenanzahl() {
    return personenanzahl;
}
