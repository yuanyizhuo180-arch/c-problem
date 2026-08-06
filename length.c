#include <stdio.h>
#include <string.h>

int main(void)
{
    char name [100];
    printf("Name: ");
    scanf("%99s", name);

    int n = strlen(name);
    printf("%i\n", n);
}