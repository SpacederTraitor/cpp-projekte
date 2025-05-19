#include "rechner.h"
#include <cmath>


using namespace std;


Rechner::Rechner()
{

}


void Rechner::add() {
    daten.setErgebnis(daten.getZahl1() + daten.getZahl2());
}

void Rechner::sub() {
    daten.setErgebnis(daten.getZahl1() - daten.getZahl2());
}

void Rechner::mul() {
    daten.setErgebnis(daten.getZahl1() * daten.getZahl2());
}

void Rechner::div() {
    if (daten.getZahl2() != 0) {
        daten.setErgebnis(daten.getZahl1() / daten.getZahl2());
    } else {
        daten.setErgebnis(0);
    }
}

void Rechner::pow() {
    daten.setErgebnis(static_cast<int>(std::pow(daten.getZahl1(), daten.getZahl2())));
}

void Rechner::wurzel() {
        daten.setErgebnis(static_cast<int>(std::sqrt(daten.getZahl1())));
}

void Rechner::andberechnung() {
    daten.setErgebnis(daten.getZahl1() & daten.getZahl2());
}

void Rechner::orberechnung() {
    daten.setErgebnis(daten.getZahl1() | daten.getZahl2());
}

void Rechner::nand() {
    daten.setErgebnis(~(daten.getZahl1() & daten.getZahl2()));
}

void Rechner::setZahl1(int newZahl1){
    daten.setZahl1(newZahl1);
}


void Rechner::setZahl2(int newZahl2){
    daten.setZahl2(newZahl2);
}

int Rechner::getErgebnis(){
    return daten.getErgebnis();
}
