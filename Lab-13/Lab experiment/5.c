#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter no. of cols: ");
    scanf("%d", &cols);
    int arr1[rows][cols];
    int arr2[rows][cols];
    printf("Enter values to the Matrix A: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter a[%d][%d] value : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter values to the Matrix B: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter b[%d][%d] value : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The given matrix A is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe given matrix B is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    int ans = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                ans = 0;
                break;
            }
        }
    }
    if (ans == 1)
    {
        printf("\nMatrix A is equal to Matrix B\n");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B\n");
    }
}