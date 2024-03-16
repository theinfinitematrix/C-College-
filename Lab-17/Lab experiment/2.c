#include <stdio.h>
int sumDiagonal(int row, int col, int arr[][col])
{
    int diagonalsum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                diagonalsum += arr[i][j];
            }
        }
    }
    return diagonalsum;
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    printf("Enter a 3*3 size matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int diagonalsum = sumDiagonal(row, col, arr);
    printf("Sum of the main diagonal elements of given array is %d\n", diagonalsum);
    return 0;
}