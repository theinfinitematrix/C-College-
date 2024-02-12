#include <stdio.h>
int main()
{
    float marks;
    printf("Enter total marks secured by a student: ");
    scanf("%f", &marks);
    if (marks > 100)
    {
        printf("Enter marks below 100\n");
    }
    else if (marks >= 90)
    {
        printf("Grade secured is O\n");
    }
    else if (marks >= 80)
    {
        printf("Grade secured is E\n");
    }
    else if (marks >= 70)
    {
        printf("Grade secured is A\n");
    }
    else if (marks >= 60)
    {
        printf("Grade secured is B\n");
    }
    else if (marks >= 50)
    {
        printf("grade secured is C\n");
    }
    else if (marks >= 40)
    {
        printf("Grade secured is D\n");
    }
    else
    {
        printf("Grade secured is F\n");
    }
}