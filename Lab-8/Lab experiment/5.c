#include <stdio.h>

int findgcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    int gcd = findgcd(num1, num2);
    int lcm = (num1 * num2) / gcd;
    printf("GCD is %d, LCM is %d\n", gcd, lcm);
    return 0;
}