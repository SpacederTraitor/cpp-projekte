#include <iostream>
using namespace std;

// Funktion für lineare Suche
int lineareSuche(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Index zurückgeben, wenn gefunden
        }
    }
    return -1; // -1, wenn Element nicht gefunden
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    cout << "Gesuchtes Element eingeben: ";
    cin >> x;

    int ergebnis = lineareSuche(arr, n, x);

    if (ergebnis != -1) {
        cout << "Element " << x << " gefunden an Position " << ergebnis << endl;
    } else {
        cout << "Element " << x << " nicht gefunden." << endl;
    }

    return 0;
}
