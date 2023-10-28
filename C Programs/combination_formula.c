#include <stdio.h>
// this function  is used for calculating the factorial .
int fact(int n)
{
if(n==0)return 1;
return fact(n-1)*n;
}

// This is fuction is used for calculating combination 

int nCr(int n,int r)
{
int num,den;
num=fact(n);
den=fact(r)*fact(n-r);
return num/den;
}
int NCR(int n,int r)
{
if(n==r || r==0)
return 1;
return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{

// input to finding the value of 5c3 

printf("%d \n",NCR(5,3));
return 0;
}