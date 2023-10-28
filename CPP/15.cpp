#include<iostream>
using namespace std;
// q1 book allocation problem
bool isPossible(int arr[] ,int n , int m ,int mid){
    int student=1;
    int pagesum=0;
    for (int i = 0; i <n; i++)
    {
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            student++;
            if (student>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
            
        }
    }
    return true;
}
int allocatebookd(int arr[],int n,int m){
int s=0;
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
int e=sum;
int ans=-1;
int mid=s+((e-s)/2);
while (s<=e)
{
if(isPossible(arr,n,m,mid))
{
ans=mid;
}
}

}
// q2 aggresive cow problem

bool isPossible(vector<int> &stalls,int k,int mid){
int cowcount=1;
int lastpos=stalls[0];
for(int i=0;i<stalls.size();i++){
    if(stalls[i]-lastpos>=mid){
        cowcount++;
        if (cowcount == k) {
          return true;
    }
    lastpos=stalls[i];
        }
       
}
return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
for(int i=0;i<stalls.size();i++){
    maxi=max(maxi,stalls[i]);
}
int e=maxi;
int ans=-1;
int mid=s+(e-s)/2;
while(s<=e){
if(isPossible(stalls,k,mid)){
    ans=mid;
    s=mid+1;
}
else{
    e=mid-1;
}
 mid=s+(e-s)/2;
}
return ans;
}