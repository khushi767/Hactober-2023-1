// Program to calculate the power of a number using recursion:

#include <iostream>
using namespace std;

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << base << " raised to the power " << exponent << " is " << power(base, exponent) << endl;
    return 0;
}
