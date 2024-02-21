#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter no. of cols: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("Enter values to the matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter a[%d][%d] value : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    printf("The given matrix is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i < j)
            {
                sum += arr[i][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of upper triangular matrix = %d\n", sum);
    return 0;
}