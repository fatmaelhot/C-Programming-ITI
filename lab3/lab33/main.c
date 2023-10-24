#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int i, max, min, size;
    scanf("%d",&size);
    if(size<=0){
        printf("please enter valid number!!");
        scanf("%d",&size);

    }
    else{printf("Input elements in the array %d :\n",size);}

    printf("Input elements in the array %d :\n",size);

    for(i=0;i<size;i++)
            {
	      printf("element %d : ",i);
	      scanf("%d",&array[i]);
	    }


    max = array[0];
    min = array[0];

    for(i=1; i<size; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }


        if(array[i]<min)
        {
            min = array[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);






    return 0;
}
