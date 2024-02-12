#include <stdio.h>

int power(int x, int n)
{
    int pow = 1;
    for (int i = 1; i <= n; i++)
    {
        pow *= x;
    }
    return pow;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += power(i, i);
    }
    printf("The sum of the series is %d\n", sum);
    return 0;
}