#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, s, row, z = 0;
   printf("Enter the number of rows ");
   scanf("%d", &row);
   for (i = 1; i <= row; ++i, z = 0) {
      for (s = 1; s <= row - i; ++s) {
         printf("  ");
      }
      while (z != 2 * i - 1) {
         printf("* ");
         ++z;
      }
      printf("\n");
   }
    return 0;
}
