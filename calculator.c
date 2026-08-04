#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("%.50f\n", (float) x / y);
    return 0;
}