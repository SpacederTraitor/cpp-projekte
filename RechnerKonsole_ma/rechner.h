#ifndef RECHNER_H
#define RECHNER_H


class Rechner
{
public:
    Rechner();
    void add();
    void setZahl1(int newZahl1);
    int getZahl1();
    int getSumme();

private:
    int zahl1;
    int zahl2;
    int summe;
};

#endif // RECHNER_H
