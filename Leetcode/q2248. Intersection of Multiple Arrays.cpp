class Solution {
private:
    void fnc(vector<int>& arr, map<int, int>& h1) {
        for (int x : arr) {
            if (h1.find(x) != h1.end()) {
                h1[x]++;
            } else {
                h1[x] = 1;
            }
        }
    }

public:
    vector<int> intersection(vector<vector<int>>& arr) {
        map<int, int> h1;
        int l = arr.size();
        
        for (int i = 0; i < l; i++) {
            fnc(arr[i], h1);
        }
        
        vector<int> ans;
        for (const auto& pair : h1) {
            if (pair.second == l) {
                ans.push_back(pair.first);
            }
        }
        
        return ans;
    }
};
