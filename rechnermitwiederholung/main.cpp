#include <iostream>

using namespace std;

int main()
{
    int zahl1;
    int zahl2;
    int summe;
    char nochmal = 'j';

    while (nochmal == 'j')
    {
    cout << "Zahl1" << endl;
    cin >> zahl1;
    cout << "Zahl2" << endl;
    cin >> zahl2;

    summe = zahl1 - zahl2;
    cout << summe << endl;
    cin >> nochmal;
    }
    return 0;
}
