#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int numcpy = num;
    int armstrong = 0;
    while (numcpy)
    {
        int digit = numcpy % 10;
        armstrong += digit * digit * digit;
        numcpy /= 10;
    }
    if (armstrong == num)
    {
        printf("The given number is Armstrong\n");
    }
    else
    {
        printf("The given number is not strong\n");
    }
    return 0;
}