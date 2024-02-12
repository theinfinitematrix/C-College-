#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the sides of triangle: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 + n2 <= n3 || n2 + n3 <= n1 || n1 + n3 <= n2)
    {
        if (n1 + n2 == n3 || n2 + n3 == n1 || n1 + n3 == n2)
        {
            printf("It is a straight line\n");
        }
        else
        {
            printf("It can't form a tringle\n");
        }
    }
    else
    {
        if (n1 == n2 && n2 == n3)
        {
            printf("Triangle is Equilateral\n");
        }
        else if (n1 == n2 || n2 == n3)
        {
            printf("Triangle is Isosceles\n");
        }
        else
        {
            printf("Triangle is Scalene\n");
        }
    }
    return 0;
}