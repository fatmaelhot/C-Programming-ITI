#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("enter the number\t");
    scanf("%d",&x);
    if(x>0){
        printf("positive");
    }
    else if(x<0){
        printf("negative");
    }
    else{
        printf("zero");
    }

    return 0;
}
