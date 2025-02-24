#include <iostream>

using namespace std;

int main()
{
    int buchungen;
    double status;

    cout << "Bankgebühren" << endl;
    cin >> buchungen;
    if (buchungen <= 10)
    {
    status = 0;
    }
    if ((buchungen >= 11)
        && (buchungen <= 20))
    {
    status = 1.15;
    status = 1.15 * buchungen;
    }
    if (buchungen >= 21)
    {
    status = 10;
    status = (0.15 * 20) + ((buchungen - 20) * 0.10);
    }

    cout << "Betrag = " << status;


    return 0;
}
