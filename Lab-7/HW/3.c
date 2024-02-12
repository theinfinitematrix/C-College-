#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int reverse = 0;
    int numcpy = num;
    while (numcpy)
    {
        int digit = numcpy % 10;
        reverse = reverse * 10 + digit;
        numcpy /= 10;
    }
    if (num == reverse)
    {
        printf("The given number is palindrome\n");
    }
    else
    {
        printf("The given number is not palindrome\n");
    }
    return 0;
}