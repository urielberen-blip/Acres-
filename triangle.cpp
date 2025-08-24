#include <iostream>
using namespace std;

int main() {
    // Total number of rows
    int rows = 4;

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // New line after each row
        cout << endl;
    }

    return 0;
}
