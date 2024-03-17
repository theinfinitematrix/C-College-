#include <stdio.h>
int solve(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    int recAns = solve(n - 1) + solve(n - 2);
    return recAns;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ans = solve(n);
    printf("n = %d\nnth Fibonacci number = %d\n", n, ans);
    return 0;
}