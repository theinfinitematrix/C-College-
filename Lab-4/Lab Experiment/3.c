#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = num % 10;
    while (num)
    {
        num = num / 10;
        if (num < 10)
        {
            sum += num;
        }
    }
    printf("Sum of the digits is: %d\n .", sum);

    return 0;
}