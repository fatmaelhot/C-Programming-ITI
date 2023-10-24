#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exp;
   int x = 1;
   printf("Enter a base value ");
   scanf("%d", &base);
   printf("Enter an exponent value ");
   scanf("%d", &exp);
   while (exp != 0){
      x *= base;
      --exp;
   }
   printf("result = %d", x);
    return 0;
}
