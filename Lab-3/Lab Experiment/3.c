#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area is: %.2f", area);
    return 0;
}