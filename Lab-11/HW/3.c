#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    int multiply = 1;
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        multiply *= arr[i];
    }
    printf("Product of the array elements = %d\n", multiply);
    return 0;
}