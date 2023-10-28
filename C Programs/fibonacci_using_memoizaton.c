/* the given code is for fibonacci series nubber for ex-9 o/p=34...
actually the time complexity of normal code of fibonacci is O(2^n),
 where as using that memoization method we can reduce the time complexity to O(n)  */
 
 
#include <stdio.h>
#include<stdlib.h>

int F[10]; // array for storing the  number initially to -1, 
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    int i;
    
    for (i = 0; i < 10; i++)
        F[i] = -1;
        
    printf("%d \n", mfib(9));
    return 0;
}