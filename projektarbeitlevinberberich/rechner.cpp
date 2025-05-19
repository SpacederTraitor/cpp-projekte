#include "rechner.h"

Rechner::Rechner()
{

}
void Rechner::setZahl1(int newZahl1){
    zahl1 = newZahl1;
}

int Rechner::getZahl1() {
    return zahl1;
}
void Rechner::setZahl2(int newZahl2){
    zahl2 = newZahl2;
}

int Rechner::getZahl2() {
    return zahl2;
}

void Rechner::add() {
    ergebnis = zahl1 + zahl2;
    myRechner.setErgebnis(ergebnis);
}

void Rechner::setErgebnis(int newErgebnis){
    ergebnis = newErgebnis;
}

int Rechner::getErgebnis() {
    return ergebnis;
}

