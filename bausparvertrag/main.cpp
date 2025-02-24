#include <iostream>

using namespace std;

int main()
{
    double gesamtvermögen;
    int kinder;
    int familienstand;
    double status;

    cout << "Bitte geben sie Ihr Vermögen an" << endl;
    cin >> gesamtvermögen;

    cout << "Bitte geben Sie die Anzahl ihrer Kinder an, falls sie welche haben. Wenn sie keine haben geben sie 0 an." << endl;
    cin >> kinder;
    cout << "Bitte geben sie an, ob sie verheiratet oder unverheiratet sind (Unverheiratet = 1, Verheiratet = ... )" << endl;
    cin >> familienstand;

    if (800 < gesamtvermögen)
    {
        gesamtvermögen = 800;
    }
    if (1 == familienstand)
    {
        status = gesamtvermögen * 1.14;
    }
    else
    {
        status = gesamtvermögen * 1.07;
    }
    if (1 <= kinder)
    {
        status = status * (kinder * 1.02);
    }
    cout << "Ergebnis: " << status;




}
