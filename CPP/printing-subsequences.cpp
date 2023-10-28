#include<bits/stdc++.h>
using namespace std;
void subsequence(string s,string temp,int i){
  if(i==s.size()) {
    cout<<temp<<" ";
    return;
  }
  subsequence(s,temp+s[i],i+1);
  subsequence(s,temp,i+1);
  return;
}
int main()
{
  string s="abc";
  string temp="";
  int index=0;
  subsequence(s,temp,index);
  return 0;
}