#include <stdio.h>
int main()
{
    int row;
    printf("Enter the row number: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        printf("%d %d %d %d \n", i, i, i, i);
    }
    return 0;
}