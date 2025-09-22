#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <chrono>
using namespace std;

class Person {
public:
    Person(string v = "", string n = "");

    int getKundenNr();
    string getVorname();
    string getNachname();
    string fullname();
    char getStatus();
    void setStatus(char s);

    void updateLastVisit();
    long daysSinceLastVisit();

    static int getPersonenanzahl();

private:
    int kundenNr;
    string vorname;
    string nachname;
    char status;
    chrono::system_clock::time_point lastVisit;

    static int nextNr;
    static int personenanzahl;
};

#endif
