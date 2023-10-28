#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(vector<string>& result, string current, int openCount, int closeCount, int n) {
    if (openCount == n && closeCount == n) {
        result.push_back(current);
        return;
    }
    if (openCount < n) {
        generateParenthesisHelper(result, current + "(", openCount + 1, closeCount, n);
    }
    if (closeCount < openCount) {
        generateParenthesisHelper(result, current + ")", openCount, closeCount + 1, n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper(result, "", 0, 0, n);
    return result;
}

int main() {
    int n = 3;
    vector<string> result = generateParenthesis(n);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}
