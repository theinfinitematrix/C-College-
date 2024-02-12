#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("The given number is perfect\n");
    }
    else
    {
        printf("The given number is not perfect\n");
    }
    return 0;
}