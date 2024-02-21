#include <stdio.h>
int main()
{
    float arr1[2][2];
    float arr2[2][2];
    printf("Enter elements of 1st matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &arr1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &arr2[i][j]);
        }
    }
    printf("Sum Of Matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            float sum = arr1[i][j] + arr2[i][j];
            printf("%.1f\t", sum);
        }
        printf("\n");
    }
}