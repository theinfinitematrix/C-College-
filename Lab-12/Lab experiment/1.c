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
    printf("Enter how many numbers: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the value of %d numbers: ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr, j, j + 1);
            }
        }
    }
    printf("The Numbers in ascending order are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}