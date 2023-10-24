#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstname[10];
    char lastname[10];

    printf("enter your first name: ");
    scanf("%s",firstname);
    printf("enter your last name: ");
    scanf("%s",lastname);
    printf("full name is:%s %s.\n",firstname,lastname);
    return 0;
}
