#include <stdio.h>
int oddSum(int arr[], int size)
{
    int oddsum = 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] & 1) == 1)
        {
            oddsum += arr[i];
        }
    }
    return oddsum;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int oddsum = oddSum(arr, size);
    printf("Sum of the odd values = %d\n", oddsum);
    return 0;
}