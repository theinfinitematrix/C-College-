#include <stdio.h>
void createMatrix(int row, int col, int arr[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    printf("Enter matrix1: \n");
    createMatrix(3, 3, arr1);
    printf("Enter matrix2: \n");
    createMatrix(3, 3, arr2);
    int addMatrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            addMatrix[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Resultant Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", addMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}