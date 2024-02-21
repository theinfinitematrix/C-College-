#include <stdio.h>
int main()
{
    int size;
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in the array: ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The unique elements found in the array are: ");
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int ans = 1;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (temp == arr[j])
                {
                    ans = 0;
                    break;
                }
            }
        }
        if (ans == 1)
        {
            printf("%d ", temp);
        }
    }
    return 0;
}