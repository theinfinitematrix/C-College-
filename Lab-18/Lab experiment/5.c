#include <stdio.h>
int solve(int arr[], int size, int index, int max)
{
    if (index == 0)
    {
        max = arr[0];
    }
    if (index >= size)
    {
        return max;
    }

    if (max < arr[index])
    {
        max = arr[index];
    }
    return solve(arr, size, index + 1, max);
}
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = solve(arr, size, 0, max);
    printf("Entered array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nMaximum elements of the given array: %d\n", max);
    return 0;
}