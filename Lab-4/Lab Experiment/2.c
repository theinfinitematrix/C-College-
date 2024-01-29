#include <stdio.h>
int main()
{
    int meter, M, KM;
    printf("Enter the distance: ");
    scanf("%d", &meter);
    KM = meter / 1000;
    M = meter - KM * 1000;
    printf("%d meter = %d Km and %d meters.\n", meter, KM, M);
    return 0;
}