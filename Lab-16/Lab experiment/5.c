#include <stdio.h>
void swapArray(int arr[], int size)
{
    int temp = arr[size - 1];
    arr[size - 1] = arr[0];
    arr[0] = temp;
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
}