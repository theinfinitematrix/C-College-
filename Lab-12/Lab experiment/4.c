#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arrcpy[size];
    for (int i = 0; i < size; i++)
    {
        arrcpy[i] = arr[size - 1 - i];
    }
    printf("Reversed array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arrcpy[i]);
    }
    return 0;
}