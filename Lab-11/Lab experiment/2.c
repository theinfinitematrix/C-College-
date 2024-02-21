#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);
    int arr[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the numbers stored in array: %d\n", sum);
    return 0;
}