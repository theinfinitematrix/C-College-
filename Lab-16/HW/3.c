#include <stdio.h>
int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int primeSum(int arr[], int size)
{
    int primesum = 0;
    for (int i = 0; i < size; i++)
    {
        if (prime(arr[i]))
        {
            primesum += arr[i];
        }
    }
    return primesum;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int primesum = primeSum(arr, size);
    printf("Sum of the Prime values = %d \n", primesum);
    return 0;
}