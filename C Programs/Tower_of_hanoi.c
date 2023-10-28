#include <stdio.h>
// this fuction are used to calculate the steps in tower of hanoi

void TOH(int n,int A,int B,int C)
{
if(n>0)
{
TOH(n-1,A,C,B);
printf("(%d,%d)\n",A,C);
TOH(n-1,B,A,C);
}
}
int main()
{
// output of tower of hanoi of 4 disks.
TOH(4,1,2,3);
return 0;
}