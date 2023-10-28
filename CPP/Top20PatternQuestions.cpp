
#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define For(i, a, b) for(int i=(a);i< (b);i++)
int main()
{
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
     freopen("./.vscode/input.txt", "r", stdin);
     freopen("./.vscode/output.txt", "w", stdout);
    #endif
    cin.tie(NULL);
    cout.tie(NULL);

    int choice;
    cin>>choice;
    int k=1;
    switch(choice){
        case 1:
        For(i,0,5)
        {
        For(j,0,5)
        {
            cout<<"* ";
        }
        cout<<endl;
        }
        break;

        case 2:
        For(i,0,5)
        {
            For(j,0,i+1)
            cout<<"* ";
            cout<<endl;
        }
        break;

        case 3:
        For(i,1,6)
        {
            For(j,1,i+1)
            cout<<j<<" ";
            cout<<endl;
        }
        break;
        case 4:
         For(i,1,6)
        {
            For(j,1,i+1)
            cout<<i<<" ";
            cout<<endl;
        }
        break;
        case 5:
        For(i,1,6)
        {
            For(j,1,6-i+1)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 6:
        For(i,1,6)
        {
            For(j,1,6-i+1)
            cout<<j<<" ";
            cout<<endl;
        }
        break;
        case 7:
        For(i,1,6)
        {
            For(j,1,6-i)
            cout<<"  ";
            for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 8:
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            cout<<"  ";
            for(int j=1;j<10-2*(i-1);j++)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 9:
        For(i,1,6)
        {
            For(j,1,6-i)
            cout<<"  ";
            for(int j=1;j<=2*i-1;j++)
            cout<<"* ";
            cout<<endl;
        }
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<i;j++)
            cout<<"  ";
            for(int j=1;j<10-2*(i-1);j++)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 10:
        for(int i=0;i<=5;i++)
        {
            for(int j=0;j<=i;j++)
            cout<<"* ";
            cout<<endl;
        }
        for(int i=4;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 11:
        for(int i=1;i<=5;i++)
        {
            for(int j=0;j<i;j++)
            cout<<(i+j)%2<<" ";
            cout<<endl;
        }
        break;
        case 12:
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=i;j++)
            cout<<j;
            for(int j=i;j<4;j++)
            cout<<"  ";
            for(int j=i;j>=1;j--)   
            cout<<j;
            cout<<endl;
        }
        break;
        case 13:
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
        break;
        case 14:
        for(char i='A';i<='E';i++)
        {
            for(char j='A';j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        break;
        case 15:
        for(char i='E';i>='A';i--)
        {
            for(char j='A';j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        break;
        case 16:
        for(char i='A';i<='E';i++)
        {
            for(char j='A';j<=i;j++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        break;
        case 17:
        for(char i='A';i<='D';i++)
        {
            for(char j=i;j<='D';j++)
            cout<<"  ";
            for(char j='A';j<=i;j++)
            {
                cout<<j<<" ";
            }
            for(char j=i-1;j>='A';j--)
            cout<<j<<" ";
            cout<<endl;
        }
        break;
        case 18:
        for(char i='E';i>='A';i--)
        {
            for(char j=i;j<='E';j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        break;
        case 19:
        for(int i=1;i<=5;i++)
        {
            for(int j=i;j<=5;j++)
            cout<<"* ";
            for(int j=1;j<i;j++)
            cout<<"    ";
            for(int j=i;j<=5;j++)
            cout<<"* ";
            cout<<endl;
        }
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            cout<<"* ";
            for(int j=i;j<5;j++)
            cout<<"    ";
            for(int j=1;j<=i;j++)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 20:
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            cout<<"* ";
            for(int j=i;j<5;j++)
            cout<<"    ";
            for(int j=1;j<=i;j++)
            cout<<"* ";
            cout<<endl;
        }
        for(int i=1;i<=4;i++)
        {
            for(int j=i;j<=4;j++)
            cout<<"* ";
            for(int j=1;j<=i;j++)
            cout<<"    ";
            for(int j=i;j<=4;j++)
            cout<<"* ";
            cout<<endl;
        }
        break;
        case 21:
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=4;j++)
            {
                if(i==1 || i==10)
                cout<<"* ";
                else if((i==4 && j==1)||(i==7 && j==1)||(i==4 && j==4)||(i==7 && j==4))
                cout<<"* ";
                else
                cout<<"  "; 
            }
            cout<<endl;
        }
        break;
        case 22:
        
        break;
        default:
        break;
    }
    return 0;
}
