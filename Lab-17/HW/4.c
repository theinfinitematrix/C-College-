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
void printMatrix(int row, int col, int arr[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int solve(int i, int j, int arr1[][3], int arr2[][3])
{

    int ans = 0;
    for (int k = 0; k < 3; k++)
    {
        ans += arr1[i][k] * arr2[k][j];
    }
    return ans;
}
void multiplyMatrix(int arr1[][3], int arr2[][3], int ans[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = solve(i, j, arr1, arr2);
        }
    }
}
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int ansmatrix[3][3];

    printf("Enter matrix1: \n");
    createMatrix(3, 3, arr1);
    printf("Enter matrix2: \n");
    createMatrix(3, 3, arr2);
    printf("Entered matrix1: \n");
    printMatrix(3, 3, arr1);
    printf("Entered matrix2: \n");
    printMatrix(3, 3, arr2);
    multiplyMatrix(arr1, arr2, ansmatrix);
    printf("Result matrix: \n");
    printMatrix(3, 3, ansmatrix);
    return 0;
}