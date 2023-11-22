#include<stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    } else
    {
        return n * factorial(n - 1);
    }
}
float seriesSum(int N)
{
    float sum = 0.0;

    for (int i = 1; i <= N; i++)
    {
        sum += (float)i / factorial(i);
    }

    return sum;
}

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Sum of the series up to %d terms: %f\n", N, seriesSum(N));
    return 0;
}

