#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += sqrt(i);
    }
    printf("The sum of the series is %f\n", sum);
    return 0;
}