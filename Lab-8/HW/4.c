#include <stdio.h>

int main()
{
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    float ans = 0;
    for (int i = 1; i <= range; i++)
    {
        ans += 1 / ((float)i);
    }
    printf("The sum of the series is %.6f\n", ans);
    return 0;
}