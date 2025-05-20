#ifndef RECHNER_H
#define RECHNER_H
#include "daten.h"

using namespace std;

class Rechner
{
public:
    Rechner();
    void add();
    void sub();
    void mul();
    void div();
    void wurzel();
    void andberechnung();
    void orberechnung();
    void nand();
    void setZahl1(int newZahl1);
    void setZahl2(int newZahl2);
    int getZahl1();
    int getZahl2();
    int getErgebnis();
    void saveToText();
    void loadFromText();

private:
    Daten daten;
    const string textFile = "calculator.txt";
};

#endif // RECHNER_H
