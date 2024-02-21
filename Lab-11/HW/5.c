#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array in ascending order: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Input the position where to delete: ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("The new list is: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}