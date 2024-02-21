#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("Largest element stored in an array: %d\n", largest);
    return 0;
}