#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string v = "", string n = "");

    int getKundenNr();
    string getVorname();
    string getNachname();
    string fullname();

    static int getPersonenanzahl();

private:
    int kundenNr;
    string vorname;
    string nachname;

    static int nextNr;
    static int personenanzahl;
};

#endif
