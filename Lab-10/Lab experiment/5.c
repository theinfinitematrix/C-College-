#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if ((i & 1) == 0)
        {
            int num = 1;
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d ", num++);
            }
        }
        else
        {
            int num = i + 1;
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d ", num--);
            }
        }
        printf("\n");
    }
    return 0;
}