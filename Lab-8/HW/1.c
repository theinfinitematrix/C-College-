#include <stdio.h>

int sumofnaturalnumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the vlue of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += sumofnaturalnumbers(i);
    }
    printf("The particular series sum is %d\n", sum);
    return 0;
}