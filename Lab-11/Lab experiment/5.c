#include <stdio.h>
int main()
{
    int size, element, location;
    printf("Enter no of elements: ");
    scanf("%d", &size);
    int arr[size + 1];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the loaction: ");
    scanf("%d", &location);
    for (int i = size; i > location - 1; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[location - 1] = element;
    printf("The resultant array: ");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}