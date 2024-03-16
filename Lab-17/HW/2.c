#include <stdio.h>
void swap(int row, int col, int arr[][col])
{
    int minrow = 0;
    int mincol = 0;
    int maxrow = 0;
    int maxcol = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[minrow][mincol] > arr[i][j])
            {
                minrow = i;
                mincol = j;
            }
            if (arr[maxrow][maxcol] < arr[i][j])
            {
                maxrow = i;
                maxcol = j;
            }
        }
    }

    int temp = arr[minrow][mincol];
    arr[minrow][mincol] = arr[maxrow][maxcol];
    arr[maxrow][maxcol] = temp;
}
void printMatrix(int row, int col, int arr[row][col])
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
int main()
{
    int row, col;
    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("Enter the martrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered matrix: \n");
    printMatrix(row, col, arr);

    swap(row, col, arr);
    printf("Matrix After Swapping: \n");
    printMatrix(row, col, arr);
    return 0;
}