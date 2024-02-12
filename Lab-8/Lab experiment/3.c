#include <stdio.h>

void checkprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("The given number %d is not prime\n", num);
            return;
        }
    }
    printf("The given number %d is prime\n", num);
    return;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    checkprime(num);
}