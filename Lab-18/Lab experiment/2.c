#include <stdio.h>
int getGCD(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return getGCD(a - b, b);
    }
    if (b > a)
    {
        return getGCD(a, b - a);
    }
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    int gcd = getGCD(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}