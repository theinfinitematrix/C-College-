#include <stdio.h>
void copyArr(int arr[], int brr[], int size, int index)
{
    if (index >= size)
    {
        return;
    }
    brr[index] = arr[index];
    copyArr(arr, brr, size, index + 1);
    return;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("please enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int brr[size];
    copyArr(arr, brr, size, 0);
    printf("Elements of the second array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("value inside array b[%d] = %d\n", i, brr[i]);
    }
    return 0;
}