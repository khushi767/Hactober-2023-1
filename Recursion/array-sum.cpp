// Program to calculate the sum of elements in an array using recursion:

#include <iostream>
using namespace std;
int arraySum(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arraySum(arr, n - 1) + arr[n - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << arraySum(arr, n) << endl;
    return 0;
}
