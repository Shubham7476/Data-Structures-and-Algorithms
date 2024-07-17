/*
*         *
* *     * *
* * * * * *
* *     * *
*         *
*/
#include <iostream>
using namespace std;

void symmetry(int n) {
    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i;

        // Stars
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        // Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        cout << endl;

        if (i < n) spaces -= 2;
        else spaces += 2;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    symmetry(n);
    return 0;
}
