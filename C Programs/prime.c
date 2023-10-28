#include<stdio.h>
int main()
{
    int a,b,i;

    printf("Enter the number you wish to check: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            b++;
        }
    }
        if(b==2)
        {
            printf("It is a prime numeber.");
        }
        else
        {
            printf("It is not a prime number");
        }
    
}