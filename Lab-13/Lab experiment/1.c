#include <stdio.h>
int main()
{
    int city, day;
    printf("Enter no of city: ");
    scanf("%d", &city);
    printf("Enter no of days: ");
    scanf("%d", &day);
    printf("Enter the temp: \n");
    int arr[city][day];
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < day; j++)
        {
            printf("City %d, Day %d == ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nTemperature Readings:\n");
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < day; j++)
        {
            printf("City %d, Day %d == %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
    return 0;
}