#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter the value of x and n: ");
    scanf("%d%d", &x, &n);
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= x;
    }
    printf("The value of %d^%d is %d\n", x, n, ans);
    return 0;
}