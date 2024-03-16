#include <stdio.h>
int eleSum(int row, int col, int arr[][col])
{
    int elesum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            elesum += arr[i][j];
        }
    }
    return elesum;
}
int main()
{
    int row, col;
    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("Enter the matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int elesum = eleSum(row, col, arr);
    printf("Sum of the elements of the given array = %d\n", elesum);
    return 0;
}