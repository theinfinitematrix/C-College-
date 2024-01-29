#include <stdio.h>
int main()
{
    int num;
    int reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("The Reversed number is: %d.\n", reversed);

    return 0;
}