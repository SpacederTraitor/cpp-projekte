#ifndef DATEN_H
#define DATEN_H
#include <string>

using namespace std;

class Daten
{
public:
    void setZahl1(int newZahl1);
    int getZahl1();
    void setZahl2(int newZahl2);
    int getZahl2();
    void setErgebnis(int newErgebnis);
    int getErgebnis();
    void saveToText(const string& filename);
    void loadFromText(const string& filename);

private:
    int zahl1 = 0;
    int zahl2 = 0;
    int ergebnis = 0;
};

#endif // DATEN_H
