#include "daten.h"
#include <fstream>

using namespace std;

void Daten::setZahl1(int newZahl1) {
    zahl1 = newZahl1;
}

int Daten::getZahl1() {
    return zahl1;
}

void Daten::setZahl2(int newZahl2) {
    zahl2 = newZahl2;
}

int Daten::getZahl2() {
    return zahl2;
}

void Daten::setErgebnis(int newErgebnis) {
    ergebnis = newErgebnis;
}

int Daten::getErgebnis() {
    return ergebnis;
}

void Daten::saveToText(const string& filename) {
    ofstream file(filename);
    file << zahl1 << '\n';
    file << zahl2 << '\n';
    file << ergebnis << '\n';
    file.close();
}

void Daten::loadFromText(const string& filename) {
    ifstream file(filename);
    file >> zahl1;
    file >> zahl2;
    file >> ergebnis;
    file.close();
}
