#include <stdio.h>
int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d ", n);
        n--;
    }
    return 0;
}