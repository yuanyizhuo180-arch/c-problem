#include<stdio.h>

float average(int length, int numbers[]);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i <N; i++)
    {
        int n;
        printf("Score: ");
        scanf("%d", &n);
        scores[i] = n ;
    }

    printf("Average: %f\n", average(N, scores));
}

float average(int length, int numbers[])
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum / (float) length;
}
