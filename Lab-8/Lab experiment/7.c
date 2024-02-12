#include <stdio.h>

int factorial(int num)
{
    int ans = 1;
    for (int i = 2; i <= num; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    int numcpy = num;
    int strong = 0;
    while (numcpy)
    {
        int digit = numcpy % 10;
        strong += factorial(digit);
        numcpy /= 10;
    }
    if (num == strong)
    {
        printf("The given number %d is STRONG\n", num);
    }
    else
    {
        printf("The given number %d is not STRONG\n", num);
    }
    return 0;
}