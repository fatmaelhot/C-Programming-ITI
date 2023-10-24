#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c,f;
   printf("Enter Celsius ");
   scanf("%f",&c);
   f = c * 9/5 + 32;

   printf(" Fahrenheit is %f",f);
    return 0;
}
