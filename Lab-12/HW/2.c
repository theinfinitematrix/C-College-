#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int element;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int tempcount = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (temp == arr[j])
                {
                    tempcount++;
                }
            }
        }
        if (tempcount > count)
        {
            element = arr[i];
        }
    }
    printf("Majority elements are: %d\n", element);
    return 0;
}