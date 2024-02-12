#include <stdio.h>
int main()
{
    float num1, num2, arith;
    char ch;
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);
    printf("A for Add, S for Subtract, M for Multiplication, D for Division: ");
    scanf(" %c", &ch);
    if (ch == 'A')
    {
        arith = num1 + num2;
        printf("The sum is %.2f\n", arith);
    }
    else if (ch == 'S')
    {
        arith = num1 - num2;
        printf("The difference is %.2f\n", arith);
    }
    else if (ch == 'M')
    {
        arith = num1 * num2;
        printf("The Multiplication is %.2f\n", arith);
    }
    else
    {
        arith = num1 / num2;
        printf("The Division is %.2f\n", arith);
    }
    return 0;
}