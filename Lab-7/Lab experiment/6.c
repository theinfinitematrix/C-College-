#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int reverse = 0;
    while (num)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    printf("The reverse is %d\n", reverse);
    return 0;
}