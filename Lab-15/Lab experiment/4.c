#include <stdio.h>
int PRIME(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int ans = PRIME(num);
    if (ans == 1)
    {
        printf("%d is prime\n", num);
    }
    else
    {
        printf("%d is not prime\n", num);
    }
    return 0;
}