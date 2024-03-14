#include <stdio.h>

int getFactorial(int num)
{
    int factorial = 1;
    while (num)
    {
        factorial *= num;
        num--;
    }
    return factorial;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = getFactorial(num);
    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}