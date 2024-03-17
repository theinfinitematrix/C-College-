#include <stdio.h>
void solve(int num, int *ans)
{
    if (num)
    {
        int digit = num % 10;
        ;
        (*ans) += digit;
        solve(num / 10, ans);
    }
}
int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    int ans = 0;
    solve(num, &ans);
    printf("sum of the digits: %d\n", ans);
    return 0;
}