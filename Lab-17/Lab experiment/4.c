#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int getPrimeSum(int row, int col, int arr[][col])
{
    int primesum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (isPrime(arr[i][j]))
            {
                primesum += arr[i][j];
            }
        }
    }
    return primesum;
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
    int primesum = getPrimeSum(row, col, arr);
    printf("Sum of the prime elements of 2D array is %d\n", primesum);
    return 0;
}