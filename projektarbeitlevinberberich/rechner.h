#ifndef RECHNER_H
#define RECHNER_H
#include "daten.h"


class Rechner
{
public:
    Rechner();
    void add();
    void sub();
    void mul();
    void div();
    void pow();
    void wurzel();
    void andberechnung();
    void orberechnung();
    void nand();


    void setZahl1(int newZahl1);
    void setZahl2(int newZahl2);
    int getErgebnis();
private:
    Daten daten;
};

#endif // RECHNER_H
