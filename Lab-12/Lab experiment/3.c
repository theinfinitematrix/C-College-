#include <stdio.h>
int main()
{
    int size;
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in the array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers in the array are: ");
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] & 1) == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd numbers in the array are: ");
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] & 1) == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}