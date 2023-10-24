#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, flag = 0;
  printf("Enter a positive integer ");
  scanf("%d", &x);

  if (x == 0 || x == 1)
    flag = 1;

  for (i = 2; i <= x / 2; ++i) {

    if (x % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("%d is a prime number", x);
  else
    printf("%d is not a prime number", x);
    return 0;
}
