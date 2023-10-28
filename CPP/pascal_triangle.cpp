#include <iostream>
using namespace std;

void printPascal(int rows){
    int num = 1;
    for(int i=1;i<=rows;++i){
        for(int k=1;k<=rows-i;k++){
            cout<<" ";
        }
        for(int j=0;j<i;++j){
            if(i==0 || j==0){
                num = 1;
            }
            else{
                num = (num *(i-j))/j;
            }
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int rows = 0;
    cout<<"enter the number of rows to print pascal's triangle"<<endl;
    cin>>rows;
    printPascal(rows);

    return 0;
}