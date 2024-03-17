#include <stdio.h>
int getFactorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int ans = num * getFactorial(num - 1);
    return ans;
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