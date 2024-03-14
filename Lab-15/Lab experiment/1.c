#include <stdio.h>

int addNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    int sum = addNumbers(a, b);
    printf("Sum of %d and %d = %d\n", a, b, sum);
    return 0;
}