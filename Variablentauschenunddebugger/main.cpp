#include <iostream>

using namespace std;

int main()
{
    string test1;
    string test2;
    string temp;

    cout << "Erster Wert" << endl;
    cin >> test1;
    cout << "Zweiter Wert" << endl;
    cin >> test2;

    temp = test1;
    test1 = test2;
    test2 = temp;

    cout << "Getauschter Wert." << endl
         << "Wert 1: " << test1 << endl
         << "Wert 2: " << test2 << endl;

    return 0;
}
