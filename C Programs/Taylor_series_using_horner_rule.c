/* This is the code of Tylor series in c using Horner's rule 
With the help of that rule, we can minimized the time complexity by 
O(N^2) to O(N) */

#include<stdio.h>
#include<conio.h>

double e(int x, int n)
{
static double s;
if(n==0)
return s;
s=1+x*s/n;
return e(x,n-1);
}
int main()
{
// find the value of 2^10
printf("%lf \n",e(2,10));
return 0;
}