#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y=0;
    int z=0;
    printf("Enter x ");
    scanf("%d",&x);
    printf("Enter y ");
    scanf("%d",&y);
    printf("Enter z ");
    scanf("%d",&z);

    if(z<x&&z<y){
        printf("z is smallest num");
    }
    else if(x<y&&x<z){
        printf("x is smallest num");
    }
  else {
        printf("y is smallest num");
    }
    return 0;
}
