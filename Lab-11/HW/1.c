#include <stdio.h>
int main()
{
    int size;
    printf("Enter no of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    int location = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            location = i;
            break;
        }
    }
    if (location != -1)
    {
        printf("Number found at location = %d\n", location + 1);
    }
    else
    {
        printf("Number not found\n");
    }
    return 0;
}