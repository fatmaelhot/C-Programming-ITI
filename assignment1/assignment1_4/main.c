#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float PI = 3.14, area, circum;
    printf("Enter the raduis ");
    scanf("%d",&r);
    area = PI * r * r;
    printf("Area of circle : %f \n", area);
    circum = 2 * PI * r;
    printf("Circumference : %f ", circum);

    return 0;
}
