#ifndef RECHNER_H
#define RECHNER_H

#include "data.h"

class Rechner
{
public:
    Rechner();
    void add();
//    void setZahl1(int newZahl1);
//    int getZahl1();
//    int getSumme();

    Data *getMyData() const;
    void setMyData(Data *newMyData);

private:
//    int zahl1;
//    int zahl2;
//    int summe;
    Data* myData;
};

#endif // RECHNER_H
