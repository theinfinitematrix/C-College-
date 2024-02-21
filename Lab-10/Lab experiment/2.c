#include <stdio.h>
int main()
{
    int row;
    printf("Enter the value of n: ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}