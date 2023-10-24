#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3

int main()
{

int arr[ROW][COL]={{1,2,3},{4,5,6}};
int sum=0;
for(int i=0; i<ROW; i++){
for(int j=0; j<COL; j++){
sum=sum+arr[i][j];
      }
printf("Average ROW %d = %d \n",i+1,sum/COL);
sum=0;
  }
    return 0;
}
