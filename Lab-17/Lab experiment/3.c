#include <stdio.h>
int getLargest(int row, int col, int arr[][col])
{
    int largest = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (largest < arr[i][j])
            {
                largest = arr[i][j];
            }
        }
    }
    return largest;
}
int getSmallest(int row, int col, int arr[][col])
{
    int smallest = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }
        }
    }
    return smallest;
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
    int largest = getLargest(row, col, arr);
    int smallest = getSmallest(row, col, arr);
    printf("Largest element of 2D array is %d\n", largest);
    printf("Smallest element of 2D array is %d\n", smallest);
    return 0;
}