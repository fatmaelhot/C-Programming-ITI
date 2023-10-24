#include <stdio.h>
#include <stdlib.h>
void check_char(char c);
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    check_char(ch);
    return 0;
}
void check_char(char ch){
     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }
}
