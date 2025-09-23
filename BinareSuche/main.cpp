#include <iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int gesuchtezahleingabe;
    cout << "Gib eine Zahl ein zwischen 1 und 21 die Gesucht werden soll: ";
    cin >> gesuchtezahleingabe;

    int links = 0, rechts = size - 1, ergebnis = -1;

    while (links <= rechts) {
        int mitte = links + (rechts - links) / 2;
        if (arr[mitte] == gesuchtezahleingabe) {
            ergebnis = mitte;
            break;
        } else if (arr[mitte] < gesuchtezahleingabe) {
            links = mitte + 1;
        } else {
            rechts = mitte - 1;
        }
    }

    cout << "Stelle der Zahl im Array: " << ergebnis << endl;
    return 0;
}
