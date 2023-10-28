class Solution {
public:
    int countKDifference(vector<int>& arr, int x) {
        int c = 0;
        int l = arr.size();
        for (int i = 0; i <= l - 2; i++) {
            for (int j = i + 1; j <= l - 1; j++) {
                if (abs(arr[i] - arr[j]) == x) {
                    c++;
                }
            }
        }
        return c;
    }
};

