#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    string r="";
    vector<string> ans;
    int i =0;
    while(i<n){
        if(s[i]!=' '){
            r += s[i];
            i++;
        }   
        else{
            if(r[0]=='"'){
                for(int j=i;j<n;j++){
                    if(s[j]!='"'){
                        r += s[j];
                    }
                    else{
                        r +=s[j];
                        i = j;
                        break;
                    }
                }
                cout<<r<<endl;
            }
            ans.push_back(r);
            r = "";
        }
    }    
    return 0;
}
