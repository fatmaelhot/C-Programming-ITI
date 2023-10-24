#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=0;
    printf("enter the number\t");
    scanf("%d",&x);
    if(x%2==0){
        printf("even");
    }

    else{
        printf("odd");
    }

    return 0;
}
