#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int n = 5;

    // Upper part of the hollow diamond
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1) - i; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int k = 0; k < (2 * i) - 1; k++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the hollow diamond
    for (int i = n - 2; i >= 0; i--) {  // ✅ Now iterates correctly
        for (int m = 0; m < (n - 1) - i; m++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int o = 0; o < (2 * i) - 1; o++) {  // ✅ Corrected spacing logic
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
