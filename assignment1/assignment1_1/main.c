#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,Result;
   printf("Enter two integer num\n");
   scanf("%d",&num1);
   scanf("%d",&num2);
   Result = ((num1 + num2)*3) - 10;
   printf("the result is %d",Result);


    return 0;
}
