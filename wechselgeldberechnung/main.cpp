#include <iostream>

using namespace std;

int main()
{
    double zahlenderBetrag;
    double gegebenerBetrag;
    double summe1;

    cout << "Bitte geben sie den zu zahlenden Betrag an" << endl;
    cin >> zahlenderBetrag;
    cout << "Bitte geben die den gegebenen Betrag an" << endl;
    cin >> gegebenerBetrag;

    summe1 = gegebenerBetrag - zahlenderBetrag;



    return 0;
}
