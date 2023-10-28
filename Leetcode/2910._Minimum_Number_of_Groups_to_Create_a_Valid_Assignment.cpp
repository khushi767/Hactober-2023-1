class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& nums) {
        map<int, int> freq;
        int n = nums.size();
        
        for(int i=0; i<n; ++i)freq[nums[i]]++;
        
        vector<int> f;
        for(auto & [k, fi] : freq)f.push_back(fi);
        int MIN = *min_element(f.begin(), f.end());

        int ans = n;
        for(int l=2; l<=2*MIN; ++l){
            int this_ans = 0;
            bool ok = true;
            for(int i=0; i<f.size(); ++i){
                int bi = ((f[i]+l-1)/l)*l - f[i];
                int ai = (f[i]+l-1)/l - bi;
                if ( ai<0 or bi<0 or (ai*l + bi*(l-1))!=f[i])ok = false;
                this_ans += ai+bi;
            }
            if (ok)ans=min(ans, this_ans);
        }
        return ans;
    }
};