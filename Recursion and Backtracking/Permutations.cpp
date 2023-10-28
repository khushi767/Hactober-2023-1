#include <iostream>
#include <string>
using namespace std;

void permute(string str, int idx, int r) {
    if (idx >= r) {
        cout << str << endl;
    } else {
        for (int i = idx; i <= r; i++) {
            swap(str[idx], str[i]);
            permute(str, idx+1, r);
            swap(str[idx], str[i]);
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    permute(str, 0, n-1);
    return 0;
}
