#include "rechner.h"

Rechner::Rechner()
{

}


void Rechner::add() {
    daten.setErgebnis(daten.getZahl1() + daten.getZahl2());

}

void Rechner::setZahl1(int newZahl1){
    daten.setZahl1(newZahl1);
}


