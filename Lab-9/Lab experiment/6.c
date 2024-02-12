#include <stdio.h>

int power(int x, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow *= x;
    }
    return pow;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int temp = power(2, i) - 1;
        printf("%d ", temp);
    }
    printf(".......\n");
    return 0;
}