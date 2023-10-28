#include<bits/stdc++.h>
using namespace std;


int ninja(int n,vector<vector<int>> &v)
{
    vector<vector<int>> dp(n,vector(4,0));
    // return helper(n-1,3,v,dp);
    dp[0][0]=max(v[0][1],v[0][2]);
    dp[0][1]=max(v[0][0],v[0][2]);
    dp[0][2]=max(v[0][1],v[0][0]);
    dp[0][3]=max(v[0][0],max(v[0][1],v[0][2]));
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            int maxi=0;
            for(k=0;k<3;k++)
            {
                if(k!=j){
                    int point=dp[i-1][k]+v[i][k];
                    maxi=max(maxi,point);
                }
            }
            dp[i][j]=maxi;
        }
    }
    return dp[n-1][3];
}
