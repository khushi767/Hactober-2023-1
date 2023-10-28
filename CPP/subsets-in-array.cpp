#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>&a,vector<int>&temp,int index,vector<vector<int>>&ans){
  if(index==a.size()) {
    ans.push_back(temp);
    return;
  }
  temp.push_back(a[index]);
  subarray(a,temp,index+1,ans);
  temp.pop_back();
  subarray(a,temp,index+1,ans);
}
int main()
{
  vector<vector<int>>ans;
  vector<int>temp;
  vector<int>a{1,2,3};
  int index=0;
  subarray(a,temp,index,ans);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}