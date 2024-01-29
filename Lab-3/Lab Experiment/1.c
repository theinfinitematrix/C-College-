#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, sum;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum is: %d\n", sum);

    return 0;
}