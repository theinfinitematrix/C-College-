#include <stdio.h>
int main()
{
    int min, hour, sec, temp, sec1;
    printf("Enter the time: ");
    scanf("%d", &sec);
    sec1 = sec;
    hour = sec / 3600;
    temp = sec - hour * 3600;
    min = temp / 60;
    sec = temp % 60;
    printf("%d second = %d Hour, %d Minute and %d Second\n", sec1, hour, min, sec);
    return 0;
}