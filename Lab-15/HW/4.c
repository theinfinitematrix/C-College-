#include <stdio.h>
int countZeros(int num)
{
    int count = 0;
    while (num)
    {
        int digit = num % 10;
        if (digit == 0)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}
int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    int ans = countZeros(num);
    printf("Number of Zeros: %d\n", ans);
    return 0;
}