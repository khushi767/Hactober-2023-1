class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        vector<vector<int>> ans;
        sort(a.begin(), a.end());
        int j,k;
        for(int i=0;i<a.size()-2;i++){
            j=i+1;
            k=a.size()-1;            
            while(j<k){
                int sum=a[i]+a[j]+a[k];
                if(sum==0){
                    ans.push_back({a[i], a[j], a[k]});
                    while(j<k && a[j]==a[j+1]){
                        j++;
                    }
                    while(j<k && a[k]==a[k-1]){
                        k--;
                    }
                    j++;
                    k--;                    
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
            while(i<a.size()-1 && a[i]==a[i+1]){
                i++;
            }
        }
        return ans;
    }
};
// link -> https://leetcode.com/problems/3sum/submissions/744128499/