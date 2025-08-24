#include <iostream>
using namespace std;

int main() {
    // Make three ints and assign values
    int a = 38;
    int b = 21;
    int c = 100;

    // Calculate the average
    double average = (a + b + c) / 3.0;  // use 3.0 so we get decimal result

    // Output the result
    cout << "The average of " << a << ", " << b << ", and " << c << " is " << average << endl;

    return 0;
}
