#include <stdio.h>
#include <stdlib.h>
#define RIGHT_KEY 77
#define LEFT_KEY 75
#define UP_KEY 72
#define DOWEN_KEY 80
#define HOME 71
#define END 79

int main()
{
    char x =getch();
    if(-32==x){
        printf("Extended");
        x=getch();
        if(HOME==x){
            printf("home");
        }
        printf("%d",x);
    }
    else{
        printf("Normal key %c",x);
    }
    return 0;
}
