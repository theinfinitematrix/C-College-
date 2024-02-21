#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float)sum / size;
    printf("Average of the numbers stored in array: %.2f\n", average);
    return 0;
}