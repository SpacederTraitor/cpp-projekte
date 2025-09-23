#include "see.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

See::See() {
    srand(time(nullptr));
    wassertemperaturaktuell = 20 + rand() % 6;   // 20–25 °C
    wasserqualitaet = 1 + rand() % 5;           // Skala 1–5
}

//  Personen
Person See::createPerson(string v, string n) {
    Person p(v, n);
    personen.push_back(p);
    return p;
}

vector<Person>& See::getPersonen() {
    return personen;
}

//  Liegen
Liege See::createLiege(BeachLoungerType t) {
    Liege l(t);
    liegen.push_back(l);
    return l;
}


vector<Liege>& See::getLiegen() {
    return liegen;
}

//  Buchungen
bool See::bookLiege(int kundenNr, int liegeId) {
    auto itP = find_if(personen.begin(), personen.end(),
                       [&](Person& p){ return p.getKundenNr() == kundenNr; });
    if (itP == personen.end()) return false;

    auto itL = find_if(liegen.begin(), liegen.end(),
                       [&](Liege& l){ return l.getId() == liegeId; });
    if (itL == liegen.end()) return false;

    BuchungEntry be;
    be.kundenNr = kundenNr;
    be.liegeId = liegeId;
    buchungen.push_back(be);

    return true;
}

vector<BuchungEntry>& See::getBuchungen() {
    return buchungen;
}



//  See Infos
int See::getWassertemperaturaktuell() {
    return wassertemperaturaktuell;
}

int See::getWasserqualitaet() {
    return wasserqualitaet;
}
