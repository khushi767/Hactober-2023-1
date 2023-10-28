#include<iostream>
using namespace std;
int maximum(int l,int a,int b,int c){
  if(l==0) return 0;
  if(l<0) return -1;
  int temp1=maximum(l-a,a,b,c);
  int temp2=maximum(l-b,a,b,c);
  int temp3=maximum(l-c,a,b,c);
  int res=max(temp1,max(temp2,temp3));
  if(res==-1) return -1;
  else return res+1;
}
int main()
{
  int l,a,b,c;
  cin>>l>>a>>b>>c;
  int x=maximum(l,a,b,c);
  cout<<x;
  return 0;
}