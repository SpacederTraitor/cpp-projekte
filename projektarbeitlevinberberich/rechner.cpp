#include "rechner.h"
#include <cmath>

using namespace std;

// Konstruktor
Rechner::Rechner() {}

// Addiert
void Rechner::add() {
    daten.setErgebnis(daten.getZahl1() + daten.getZahl2());
    saveToText(); // Speichert in die Textdatei
}

// Subtrahiert
void Rechner::sub() {
    daten.setErgebnis(daten.getZahl1() - daten.getZahl2());
    saveToText(); // Speichert in die Textdatei
}

// Multipliziert
void Rechner::mul() {
    daten.setErgebnis(daten.getZahl1() * daten.getZahl2());
    saveToText(); // Speichert in die Textdatei
}

// Teilt
void Rechner::div() {
    if (daten.getZahl2() != 0) {
        daten.setErgebnis(daten.getZahl1() / daten.getZahl2());
    } else {
        daten.setErgebnis(0);
    }
    saveToText(); // Speichert in die Textdatei
}

// Wurzel von Zahl1
void Rechner::wurzel() {
    daten.setErgebnis(static_cast<int>(sqrt(daten.getZahl1())));
    saveToText(); // Speichert in die Textdatei
}

// Berechnung and
void Rechner::andberechnung() {
    daten.setErgebnis(daten.getZahl1() & daten.getZahl2());
    saveToText(); // Speichert in die Textdatei
}

// Berechnung or
void Rechner::orberechnung() {
    daten.setErgebnis(daten.getZahl1() | daten.getZahl2());
    saveToText(); // Speichert in die Textdatei
}

// Berechnung nand
void Rechner::nand() {
    daten.setErgebnis(~(daten.getZahl1() & daten.getZahl2()));
    saveToText(); // Speichert in die Textdatei
}


void Rechner::setZahl1(int newZahl1) {
    daten.setZahl1(newZahl1);
}


void Rechner::setZahl2(int newZahl2) {
    daten.setZahl2(newZahl2);
}


int Rechner::getZahl1() {
    return daten.getZahl1();
}


int Rechner::getZahl2() {
    return daten.getZahl2();
}

int Rechner::getErgebnis() {
    return daten.getErgebnis();
}

// Speichert alles in die Textdatei
void Rechner::saveToText() {
    daten.saveToText(textFile);
}

// Lädt die Werte aus der Textdatei
void Rechner::loadFromText() {
    daten.loadFromText(textFile);
}
