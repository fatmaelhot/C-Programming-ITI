#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int main()
{
    int row,col,value;
    int size;
    scanf("%d",&size);
    if(size>0&&size%2!=0){
    }
    else{
            printf("please enter odd number\n");

    scanf("%d",&size);

    }



    row=1;
    col=(size+1)/2;
    value=1;

    do
    {
    gotoxy(col*5,row*3);
    printf("%5d",value);
    delay(1);

    if(value%size==0){
        row++;
    }
    else{
        row--;
        col--;
    }
    if(row==0){
        row=size;
    }
    if(col==0){
        col=size;
    }
    value+=1;

    }
    while(value<=size*size);


    return 0;
}
