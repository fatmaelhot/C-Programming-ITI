#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int i ;

    for(i=0; i<10; i++)
    {
	    printf("element %d : ",i);
        scanf("%d", &array[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<10; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");


    return 0;
}
