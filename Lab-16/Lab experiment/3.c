#include <stdio.h>
int getLargest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}
int getSmallest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    return smallest;
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
    int largest, smallest;
    largest = getLargest(arr, size);
    smallest = getSmallest(arr, size);
    printf("Largest element of the array is %d\n", largest);
    printf("Smallest element of the array is %d\n", smallest);
    return 0;
}