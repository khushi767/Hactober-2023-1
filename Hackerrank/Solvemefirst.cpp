
// solveMeFirst has the following parameters:

// int a: the first value
// int b: the second value
// Returns
// - int: the sum of  and 


#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

// Main function for testing
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << solveMeFirst(a, b) << endl;
    return 0;
}