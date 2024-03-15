#include <stdio.h>

void swapArray(int arr[], int size)
{
    int largestindex = 0;
    int smallestindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[largestindex] < arr[i])
        {
            largestindex = i;
        }
        if (arr[smallestindex] > arr[i])
        {
            smallestindex = i;
        }
    }
    int temp = arr[smallestindex];
    arr[smallestindex] = arr[largestindex];
    arr[largestindex] = temp;
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
    printf("Entered array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    swapArray(arr, size);
    printf("\nArray after swapping: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}