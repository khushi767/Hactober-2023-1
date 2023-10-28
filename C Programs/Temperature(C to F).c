#include <stdio.h>
int main()
{
float C,F;
printf("Enter the temp in celcius : ");
scanf("%f", &C);
F = (C* (9/5)) + 32;
printf("The temperature in farenheit is %f",F);
}
