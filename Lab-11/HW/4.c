#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondlargest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (secondlargest < arr[i])
        {
            secondlargest = arr[i];
        }
    }
    printf("The second largest element in the array is: %d\n", secondlargest);
    return 0;
}