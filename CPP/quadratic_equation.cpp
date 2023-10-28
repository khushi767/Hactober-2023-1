#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 = " << root1 << " and Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i and Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
