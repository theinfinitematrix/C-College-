#include <stdio.h>

void fibonacci(int n)
{
    if (n == 1)
    {
        printf("0");
    }
    if (n >= 2)
    {
        printf("0 1 ");
    }
    int first = 0;
    int second = 1;
    int term;
    for (int i = 3; i <= n; i++)
    {
        term = first + second;
        printf("%d ", term);
        first = second;
        second = term;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}