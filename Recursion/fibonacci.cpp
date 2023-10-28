// Program to print the Fibonacci series using iteration:

#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << std::endl;
}

int main() {
    int count;
    cout << "Enter the number of terms: ";
    cin >> count;
    fibonacciSeries(count);
    return 0;
}
