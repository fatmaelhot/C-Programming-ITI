#include <stdio.h>
#include <stdlib.h>

int  cube(int x){
    return x*x*x;
}
int main(){
    int x=0;
    printf("Enter number ");
    scanf("%d",&x);

    printf("\ncube of number is %d",cube(x));


}
