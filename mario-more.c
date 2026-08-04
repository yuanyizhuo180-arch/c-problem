#include <stdio.h>

void printf_r(int spaces, int hashes);
void printf_l(int hashes);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        printf_r(height - i, i);
        printf("  ");
        printf_l(i);
    }
    return 0;
}

void printf_r(int spaces, int hashes)
{
    for (int n = 0; n < spaces; n++)
    {
        printf(" ");
    }
    for (int n = 0; n < hashes; n++)
    {
        printf("#");
    }
}

void printf_l(int hashes)
{
    for (int n = 0; n < hashes; n++)
    {
        printf("#");
    }
    printf("\n");
}