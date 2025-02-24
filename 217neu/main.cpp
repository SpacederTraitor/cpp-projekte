#include <iostream>

using namespace std;

int main()
{
    int zahl1;
    int zahl2;

    cout << "Ausgabe zwischen zwei Zahlen" << endl;
    cin >> zahl1;
    cin >> zahl2;

    for(int i = zahl1; i<zahl2; i++){
        cout << zahl1;
        zahl1=zahl1+1;
    }
    return 0;
}
