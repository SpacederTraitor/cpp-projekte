#ifndef SEE_H
#define SEE_H

#include "person.h"
#include "liege.h"
#include <vector>
#include <string>
using namespace std;

struct BuchungEntry {
    int kundenNr;
    int liegeId;

};

class See {
public:
    See();

    // Personen
    Person createPerson(string v, string n);
    vector<Person>& getPersonen();

    // Liegen
    Liege createLiege(BeachLoungerType t);
    vector<Liege>& getLiegen();

    // Buchungen
    bool bookLiege(int kundenNr, int liegeId);
    vector<BuchungEntry>& getBuchungen();

    // See Infos
    int getWassertemperaturaktuell();
    int getWasserqualitaet();

private:
    vector<Person> personen;
    vector<Liege> liegen;
    vector<BuchungEntry> buchungen;

    int wassertemperaturaktuell;
    int wasserqualitaet;
};

#endif
