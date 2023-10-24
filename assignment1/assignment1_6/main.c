#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y=0;
    printf("Enter x ");
    scanf("%d",&x);
    printf("\nEnter y ");
    scanf("%d",&y);
    if(x==y){
        printf("numbers are equal");
    }
    else if(x>y){
        printf("numbers not equal and x has heigher value");

    }
    else{
        printf("numbers not equal and y has heigher value");
    }
    return 0;
}
