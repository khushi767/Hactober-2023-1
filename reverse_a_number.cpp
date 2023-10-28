#include <bits/stdc++.h>
using namespace std;
int rev_num(int n){
    int rem,ans=0;
    while (n)
    {
        rem=n%10;
        n/=10;
        ans=ans*10+rem;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int ans=rev_num(n);
    cout<<"the reverse number is : "<<ans;
}