

// Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

// simpleArraySum has the following parameter(s):

// ar: an array of integers

#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(const vector<int>& ar) {
    int count = 0;
    for (int val : ar) {
        count += val;
    }
    return count;
}

// Main function for testing
int main() {
    vector<int> ar = {1, 2, 3, 4, 10, 11};
    cout << "Array Sum: " << simpleArraySum(ar) << endl;
    return 0;
}
