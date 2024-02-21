#include <stdio.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of d: ");
    int d;
    scanf("%d", &d);
    for (int i = 0; i < d; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
    printf("Output: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
