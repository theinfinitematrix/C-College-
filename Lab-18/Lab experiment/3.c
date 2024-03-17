#include <stdio.h>
int solve(int num)
{
    if (num < 10)
    {
        return num;
    }
    else
    {
        int sum = 0;
        while (num)
        {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return solve(sum);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans = solve(num);
    printf("sum of the digits(up to single digit) of %d = %d\n", num, ans);
    return 0;
}