#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int peak;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                peak = arr[i];
                break;
            }
        }
        else if (i == size - 1)
        {
            if (arr[i] > arr[i - 1])
            {
                peak = arr[i];
                break;
            }
        }
        else
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                peak = arr[i];
                break;
            }
        }
    }
    printf("The peak element is %d\n", peak);
    return 0;
}