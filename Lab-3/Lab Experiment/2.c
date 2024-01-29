#include <stdio.h>
#include <math.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &celsius);
    fahrenheit = 1.8 * celsius + 32;
    printf("The Fahrenheit temperature is: %.2f \n", fahrenheit);

    return 0;
}