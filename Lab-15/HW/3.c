#include <stdio.h>
int checkPrime(int num)
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
    for (int i = 2; i <= 100; i++)
    {
        if (checkPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}