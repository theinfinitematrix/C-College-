#include <stdio.h>

void lucasSequence(int n)
{
    if (n == 1)
    {
        printf("1\n");
    }
    if (n >= 2)
    {
        printf("1 3 ");
    }
    int first = 1;
    int second = 3;
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
    lucasSequence(n);
    return 0;
}