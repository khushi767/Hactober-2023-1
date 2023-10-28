/*
Input:  n=25
Output:
(right->down->left->up->right->..->end)
2       3       5
19      23      7
17      13      11
*/
#include <iostream> 
#include<vector>
#include<cmath>
using namespace std;
bool isp(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
bool issr(int x)
{
  double sr = sqrt(x);
  return ((sr - floor(sr))== 0); 
}
void spiralFill(int MAX, vector<int> v) 
{
	int val = 0,a[MAX][MAX],m=MAX,n=MAX;
	int k = 0, l = 0; 
	while (k < n && l < m)
	{
        for (int i = l; i < m; ++i){
            a[k][i] = v[val++];
        }
        k++;
        for (int i = k; i < n; ++i){
            a[i][m-1] = v[val++];
        }
        m--;
        if (k < n) 
        { 
            for (int i = m-1; i >= l; --i){
                a[n-1][i] = v[val++];
            }
            n--; 
        }
        if (l < m) 
        { 
            for (int i = n-1; i >= k; --i){
                 a[i][l] = v[val++];
            }
            l++; 
        }
	}
    for (int i=0; i<MAX; i++) 
	{ 
	for (int j=0; j<MAX; j++) 
		cout << a[i][j] <<"\t"; 
	cout << endl; 
	}
}
int main() 
{ 
	int n,i,j=0;
    cin>>n;
    vector<int> v;
    for(i=2;i<=n;i++){
        if(isp(i)){
            v.push_back(i);
            j++;
        }
    }
    else{
        int MAX=sqrt(j);
	spiralFill(MAX,v);
    }
	return 0; 
} 
