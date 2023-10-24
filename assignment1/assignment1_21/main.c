#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, z;
    int count;

    printf("Enter z ");
    scanf("%d", &z);

    count = z * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
