#include <stdio.h>
#include <math.h>
#include <limits.h>

int getSecLargest(int arr[], int size)
{
    int largest = arr[0];
    int seclargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            if (largest < arr[i])
            {
                largest = arr[i];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (seclargest < arr[i] && arr[i] < largest)
        {
            seclargest = arr[i];
        }
    }
    return seclargest;
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
    int seclargest = getSecLargest(arr, size);
    printf("Second largest element of the array is %d\n", seclargest);
    return 0;
}