class Solution{
public:
    bool isPalindrome(int i,int j,string str){
        while(i<j){
            if(str[i]!=str[j]) return 0;
            i++;
            j--;
        }
       return 1;
    }

    int palindromicPartition(string str){
        // code here
        int n = str.length();
        vector<int> dp(n+1,0);
        dp[n] = 0;
        for(int i = n-1;i>=0;i--){
            int minCost = INT_MAX;
            for(int j = i;j<n;j++){
                if(isPalindrome(i,j,str)){
                   int cost  = 1 + dp[j+1];
                   minCost = min(minCost,cost);
                }
            }
            dp[i] = minCost;
        }
        return dp[0]-1;
    }
};