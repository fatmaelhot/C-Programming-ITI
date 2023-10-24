#include <stdio.h>
#include <stdlib.h>

int main()
{
char s[1000];
int length = 0;
printf ("Enter string : ");
scanf ("%s", s);
for (int i = 0; s[i] != '\0'; i++)
  {
    length++;
  }
printf ("Length of given string : %d", length);
    return 0;
}
