#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int r = 0, td = 0, bu = 0, buso = 0;

int maxProfitRecursive(int w[], int v[], int k, int n) {
    if(n == 0 || k == 0)    return 0;
    int op1 = 0, op2 = 0;
    if(w[n - 1] <= k) {
        op1 = v[n - 1] + maxProfitRecursive(w, v, k - w[n - 1], n - 1);
    }
    op2 = maxProfitRecursive(w, v, k, n - 1);
    r++;
    return max(op1, op2);
}

int dp[100][100];
int maxProfitRMemo(int w[], int v[], int k, int n) {
    if(n == 0 || k == 0)    return 0;
    if(dp[k][n] != -1)  return dp[k][n];
    int op1 = 0, op2 = 0;
    if(w[n - 1] <= k)   op1 = v[n - 1] + maxProfitRMemo(w, v, k - w[n - 1], n - 1);
    op2 = maxProfitRMemo(w, v, k, n - 1);
    td++;
    return dp[k][n] = max(op1, op2);
}

int maxProfitBU(int w[], int v[], int k, int n) {
    int dp[k + 1][n + 1];
    for(int i = 0; i <= k; i++) {
        for(int j = 0; j <= n; j++) {
            if(i == 0 || j == 0)    dp[i][j] = 0;
            else if(w[j - 1] <= i) {
                dp[i][j] = max(v[j - 1] + dp[i - w[j - 1]][j - 1], dp[i][j - 1]);
            }
            else    dp[i][j] = dp[i][j - 1];
        }
    }
    bu++;
    return dp[k][n];
}

int maxProfitBUSO(int w[], int v[], int k, int n) {
    int dp[2][k + 1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= k; j++) {
            if(i == 0 || j == 0) {
                dp[i % 2][j] = 0;
            }
            else if(w[i - 1] <= j) {
                dp[i % 2][j] = max(v[i - 1] + dp[(i - 1) % 2][j - w[i - 1]], dp[(i - 1) % 2][j]);
            }
            else dp[i][j] = dp[(i - 1) % 2][j];
        }
    }
    buso++;
    return dp[n % 2][k];
}

int main() {
    int w[] = {2,1,3,4,5};
    int v[] = {5,4,5,7,8};
    int k = 10, n = 5;
    cout << "Recursion -> " << maxProfitRecursive(w, v, k, n)
        <<"\nFunction Call Count: " << r << endl << endl;
    memset(dp, -1, sizeof(dp));
    cout << "Recursion with Memoization -> " << maxProfitRMemo(w, v, k, n) 
        << "\nFunction Call Count: " << td << endl <<endl;
    cout << "Bottom Up -> " << maxProfitBU(w, v, k, n)
        <<"\nFunction Call Count: " << bu << endl << endl;
    cout << "Bottom Up (Space Optimized) -> " << maxProfitBUSO(w, v, k, n)
        << "\nFunction Call Count: " << buso << endl;
    return 0;
}