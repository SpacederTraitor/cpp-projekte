#include "rechner.h"

Rechner::Rechner()
{

}


void Rechner::add()
{
    summe = zahl1 + zahl2;
}

void Rechner::setZahl1(int newZahl1)
{
    zahl1 = newZahl1;
}

int Rechner::getZahl1()
{
    return zahl1;
}

int Rechner::getSumme()
{
    return summe;
}
