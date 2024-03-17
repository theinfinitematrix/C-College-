#include <stdio.h>
int solve(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return 1 + solve(num / 10);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans = solve(num);
    printf("Number of digits of %d = %d\n", num, ans);
    return 0;
}