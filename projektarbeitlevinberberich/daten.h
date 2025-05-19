#ifndef DATEN_H
#define DATEN_H


class Daten
{
public:
    void setZahl1(int newZahl1);
    int getZahl1();
    void setZahl2(int newZahl2);
    int getZahl2();
    void setErgebnis(int newErgebnis);
    int getErgebnis();

private:
    int zahl1;
    int zahl2;
    int ergebnis;
};


#endif // DATEN_H
