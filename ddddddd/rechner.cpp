#include "rechner.h"

Rechner::Rechner()
{

}


void Rechner::add()
{
    int summe = 0;
    summe = myData->getZahl1() + myData->getZahl2();
    myData->setSumme(summe);
}

//void Rechner::setZahl1(int newZahl1)
//{
//    zahl1 = newZahl1;
//}

//int Rechner::getZahl1()
//{
//    return zahl1;
//}

//int Rechner::getSumme()
//{
//    return summe;
//}

Data *Rechner::getMyData() const
{
    return myData;
}

void Rechner::setMyData(Data *newMyData)
{
    myData = newMyData;
}
