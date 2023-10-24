#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
int count = 0;
printf("Enter an integer ");
scanf("%d", &x);

do {
    x /= 10;
    ++count;
  } while (x != 0);

  printf("Number of digits: %d", count);
    return 0;
}
