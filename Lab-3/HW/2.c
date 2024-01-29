#include <stdio.h>

int main()
{
    float s1, s2, s3, s4, s5, temp;
    printf("Enter the umber of 1st subject: ");
    scanf("%f", &s1);
    printf("Enter the number of 2nd subject: ");
    scanf("%f", &s2);
    printf("Enter the number of 3rd subject: ");
    scanf("%f", &s3);
    printf("Enter the number of 4th subject: ");
    scanf("%f", &s4);
    printf("Enter the number of 5th subject: ");
    scanf("%f", &s5);
    temp = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("The average is: %f\n", temp);
    temp = (s1 + s2 + s3 + s4 + s5) / 10;
    printf("The percentage is %.2f % \n", temp);
    return 0;
}