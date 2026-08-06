#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("Before: ");
    scanf("%99s", s);

    printf("After:  ");

    for(int n = 0,  i = strlen(s); n < i; n++)
    {
    printf("%c", toupper(s[n]));
    }
    printf("\n");
    return 0;
}