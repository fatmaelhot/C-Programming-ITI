#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the degree\t");
    scanf("%d",&x);
    if(x>=85&&x<=100){
        printf("Exellent");
    }
    else if(x>=75&&x<85){
        printf("Very Good");
    }
    else if (x>=65&&x<75){
        printf("Good");
    }
    else if(x>=50&&x<65) {
        printf("pass");
    }
    else{
        printf("fail");
    }

    return 0;
}
