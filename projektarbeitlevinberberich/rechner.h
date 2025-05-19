#ifndef RECHNER_H
#define RECHNER_H


class Rechner
{
public:
    Rechner();
    void setZahl1(int newZahl1);
    int getZahl1();
    void setZahl2(int newZahl2);
    int getZahl2();
    void setErgebnis(int newErgebnis);
    int getErgebnis();
    void add();
private:
    int zahl1;
    int zahl2;
    int ergebnis;
};

#endif // RECHNER_H
