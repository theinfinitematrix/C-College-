#include <stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &arr[i]);
    }
    int unique = 0;
    int isunique;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        isunique = 1;
        for (int j = i; j < size; j++)
        {
            if (i != j)
            {
                if (temp == arr[j])
                {
                    isunique = 0;
                    break;
                }
            }
        }
        if (isunique == 1)
        {
            unique++;
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", size - unique);
    return 0;
}