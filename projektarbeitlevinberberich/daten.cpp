#include "daten.h"
#include <fstream>

using namespace std;

// Setzt Zahl1 auf den neuen Wert
void Daten::setZahl1(int newZahl1) {
    zahl1 = newZahl1;
}

// Gibt Zahl1 zurück
int Daten::getZahl1() {
    return zahl1;
}

// Setzt Zahl2 auf den neuen Wert
void Daten::setZahl2(int newZahl2) {
    zahl2 = newZahl2;
}

// Gibt Zahl2 zurück
int Daten::getZahl2() {
    return zahl2;
}

// Setzt das Ergebnis auf den neuen Wert
void Daten::setErgebnis(int newErgebnis) {
    ergebnis = newErgebnis;
}

// Gibt das Ergebnis zurück
int Daten::getErgebnis() {
    return ergebnis;
}

// Speichert Zahl1, Zahl2 und Ergebnis in eine Textdatei
void Daten::saveToText(const string& filename) {
    ofstream file(filename);
    file << zahl1 << '\n';
    file << zahl2 << '\n';
    file << ergebnis << '\n';
    file.close(); // Datei wieder zumachen
}

// Lädt Zahl1, Zahl2 und Ergebnis aus der Textdatei
void Daten::loadFromText(const string& filename) {
    ifstream file(filename);
    file >> zahl1;
    file >> zahl2;
    file >> ergebnis;
    file.close(); // Datei wieder zumachen
}
