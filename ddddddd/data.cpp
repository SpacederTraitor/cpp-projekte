#include "data.h"

Data::Data()
{

}

int Data::getZahl1() const
{
    return zahl1;
}

void Data::setZahl1(int newZahl1)
{
    zahl1 = newZahl1;
}

int Data::getZahl2() const
{
    return zahl2;
}

void Data::setZahl2(int newZahl2)
{
    zahl2 = newZahl2;
}

int Data::getSumme() const
{
    return summe;
}

void Data::setSumme(int newSumme)
{
    summe = newSumme;
}
