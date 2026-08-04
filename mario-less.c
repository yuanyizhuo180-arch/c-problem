#include<stdio.h>

void printf_l(int spaces, int hashes);

int main(void)
{
    int Height;
    do
    {
        printf("Height = ");
        scanf("%d", &Height);
    } 
    while (Height < 1 || Height > 8);

    for (int i = 1; i <= Height; i++)
    {
        printf_l(Height - i, i);
    }
    return 0;

}

void printf_l(int spaces, int hashes)
{
    for (int n = 0; n < spaces; n++)
    {
        printf(" ");
    }
    for (int n = 0; n < hashes; n++)
    {
        printf("#");
    }
    printf("\n");
}