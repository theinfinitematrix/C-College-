#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int power(int x, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow *= x;
    }
    return pow;
}

int main()
{
    int x, n;
    printf("Enter the value of x and n: ");
    scanf("%d%d", &x, &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        float num = power(x, i);
        float den = factorial(i);
        sum += num / den;
    }
    printf("The value of the series is %.2f\n", sum);
    return 0;
}