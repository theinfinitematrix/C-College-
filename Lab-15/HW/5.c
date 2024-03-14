#include <stdio.h>
int checkPalindrome(int num)
{
    int reverse = 0;
    int numcpy = num;
    while (numcpy)
    {
        int digit = numcpy % 10;
        reverse = reverse * 10 + digit;
        numcpy /= 10;
    }
    while (num)
    {
        int digit1 = num % 10;
        int digit2 = reverse % 10;
        if (digit1 != digit2)
        {
            return 0;
        }
        num /= 10;
        reverse /= 10;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a number to test for palindrome: ");
    scanf("%d", &num);
    int ans = checkPalindrome(num);
    printf("Entered number: %d\n", num);
    if (ans == 1)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Numer is not palindrome\n");
    }
    return 0;
}