#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
    int f = 1;
    printf("Enter an integer ");
    scanf("%d", &n);

    if (n < 0)
        printf("please enter positive integer");
    else {
        for (i = 1; i <= n; ++i) {
            f*= i;
        }
        printf("Factorial of n is %d ", f);
    }

    return 0;
}
