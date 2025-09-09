#ifndef SEE_H
#define SEE_H

#include <vector>
#include "Person.h"
#include "Liege.h"

class See {
private:
    vector<Person> personen;
    vector<Liege> liegen;
    double wassertemperatur;
    unsigned short wasserqualitaet;

public:
    See();

    void addPerson(Person p);
    void addLiege(Liege l);

    int getAnzahlPersonen();
    int getAnzahlLiegen();

    double getWassertemperatur();
    void setWassertemperatur(double);

    unsigned short getWasserqualitaet();
    void setWasserqualitaet(unsigned short);
};

#endif
