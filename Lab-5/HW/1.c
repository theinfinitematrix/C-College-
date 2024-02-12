#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if ((num & 1) == 0)
    {
        printf("%d is an EVEN number\n", num);
    }
    else
    {
        printf("%d is an ODD number\n", num);
    }

    // for (int i = 1; i <= 100; i++)
    // {
    //     if ((i & 1) == 0)
    //     {
    //         printf("%d is an EVEN number\n", i);
    //     }
    //     else
    //     {
    //         printf("%d is an ODD number\n", i);
    //     }
    // }
    return 0;
}