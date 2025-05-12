#ifndef DATEN_H
#define DATEN_H


class Daten
{
public:
    Daten();

    int getZahl1() const;
    void setZahl1(int newZahl1);

    int getZahl2() const;
    void setZahl2(int newZahl2);

    int getSumme() const;

    void setSumme(int newSumme);

private:
    int zahl1;
    int zahl2;
    int summe;
};


#endif // DATEN_H
