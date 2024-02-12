#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    float ans = 1 / ((float)factorial);
    printf("the value of 1/%d! is %.6f\n", n, ans);
    return 0;
}