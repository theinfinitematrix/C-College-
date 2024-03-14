#include <stdio.h>
int getSum(int num)
{
    int sum = 0;
    while (num)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = getSum(num);
    printf("Sum of the digits is %d\n", sum);
    return 0;
}