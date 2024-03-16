#include <stdio.h>
int sumOfLargestSmallest(int row, int col, int arr[][col])
{
    int largest = arr[0][0];
    int smallest = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (largest < arr[i][j])
            {
                largest = arr[i][j];
            }
            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }
        }
    }
    return largest + smallest;
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
    int ans = sumOfLargestSmallest(row, col, arr);
    printf("sum of largest and smallest element is %d\n", ans);
    return 0;
}