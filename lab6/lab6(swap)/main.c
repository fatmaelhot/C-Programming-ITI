#include <stdio.h>
#include <stdlib.h>
void swap(int* x, int* y) {

int temp = *x;

*x = *y;

*y = temp;

}

int main()
{
    int x=5;
    int y=6;

    /*
    //first way for swap
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d",x,y);*/

     /*
     //second way for swap
     int temp = x;
    x = y;
    y = temp;*/

printf("befor swap %d %d\n",x,y);
    swap(&x,&y);

    printf("after swap %d %d",x,y);
    return 0;
}
