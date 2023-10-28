#include<iostream>

using namespace std;

// binary search questions
// q1 first and last position in sorted array 
// int firstocc(int arr[],int n,int key){
// int start=0;
// int end=n-1;
// int ans=-1;
// int mid=(start/2)+(end/2);
// while (start<=end)
// {
//    if(key==arr[mid]){
//    ans=mid;
//    end=mid-1;
//    }
//    else if(key>arr[mid]){
//     start=mid+1;
//    }
//   else{
//     end=mid-1;
//    }
//    mid=(start+end)/2;
// }
// return ans;
// }
// int lastocc(int arr[],int n,int key){
// int start=0;
// int end=n-1;

// int ans=-1;

// int mid=(start/2)+(end/2);
// while (start<=end)
// {
//    if(key==arr[mid]){
//    ans=mid;
//    start=mid+1;
//    }
//    else if(key>arr[mid]){
//     start=mid+1;
//    }
//   else if(key<arr[mid]){
//     end=mid-1;
//    }
//    mid=(start+end)/2;
// }
// return ans;
// }
// find peak index in array
int findpeak(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=(s+e)/2;
while (s<e){
if(arr[m]<arr[m+1]){
    s=m+1;
}
else{
    e=m;

}
m=(s+e)/2;
}

}
int main(){
int arr[500]={1,2,3,9,15,-50,20};
//  int first =firstocc(arr,8,4);
// int last=lastocc(arr,8,4);
// cout<<first<<endl;
// cout<< last<<endl;
cout<<"peak element is: "<<findpeak(arr,7)<<endl;
return 0;
}