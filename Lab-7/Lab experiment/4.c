#include <stdio.h>
int main()
{
    int sum = 0;
    // 54 32 56 76 87 90 23 12 44 55
    for (float i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    float average = (float)sum / 10.0;
    printf("The sum is %d \nThe average is %.2f \n", sum, average);
    return 0;
}