#include <stdio.h>
#include <stdlib.h>
void check_integer(int x);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    check_integer(x);
    return 0;
}
void check_integer(int x){
     if(x >= 0 )
    {
        printf("x is positive integer");
    }
    else
    {
        printf("x is negative integer");
    }
}
