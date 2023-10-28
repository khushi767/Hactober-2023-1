#include <bits/stdc++.h>
using namespace std;
char sm_to_cap(char val){
    char ans=val-'a'+'A';
    return ans;
}
int main(){
    char val;
    cout<<"enter the letter : ";
    cin>>val;
    cout<<"the capital letter is : "<<sm_to_cap(val);
}