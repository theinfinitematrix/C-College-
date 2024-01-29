#include <stdio.h>
#include <math.h>

int main()
{
    float base, height, area;
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    area = 0.5 * base * height;
    printf("The area of the triangle is %.2f \n", area);
    return 0;
}