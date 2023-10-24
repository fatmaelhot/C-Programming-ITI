#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y=0;
    int z=0;
    char oper;
    printf("enter num1\t");
    scanf("%d",&x);
    printf("enter num2\t");
    scanf("%d",&y);
    printf("enter operator\t");
    scanf(" %c",&oper);
    switch(oper){
case '+':

    printf("%d",z=x+y);
    break;
case '-':

    printf("%d",z=x-y);
    break;
case '*':

    printf("%d",z=x*y);
    break;
case '/':
    if(y!=0){
    printf("%d",z=x/y);}
    else{
        printf("error");
    }
    break;
    }

    return 0;
}
