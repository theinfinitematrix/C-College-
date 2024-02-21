#include <stdio.h>
int getmul(int arr1[][3], int arr2[][3], int row, int col)
{
    int rowelement[3];
    int colelement[3];
    for (int j = 0; j < 3; j++)
    {
        rowelement[j] = arr1[row][j];
    }
    for (int i = 0; i < 3; i++)
    {
        colelement[i] = arr2[i][col];
    }
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        int temp = rowelement[i] * colelement[i];
        ans += temp;
    }
    return ans;
}
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    printf("Enter value of matrix a: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter value of matrix b: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Value of matrix a: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nvalue of matrix b: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter Multiplication resultant matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int ans = getmul(arr1, arr2, i, j);
            printf("%d ", ans);
        }
        printf("\n");
    }
    return 0;
}