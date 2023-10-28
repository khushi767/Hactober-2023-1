#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n,m,i,t,x,n2,m2;
  string a[21],b[21];
 
  cin >> n >> m;
 
  for(i=0;i<n;i++){
    cin >> a[i];
  }
  for(i=0;i<m;i++){
    cin >> b[i];
  }
  
  cin >> t;
  for(i=0;i<t;i++){
    cin >> x;
    n2 = x % n;
    m2 = x % m;
    if(n2 == 0) n2 = n;
    if(m2 == 0) m2 = m;
    cout << a[n2-1] << b[m2-1] << endl;
  }
 
  return 0;
}
