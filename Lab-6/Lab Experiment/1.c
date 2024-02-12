#include <stdio.h>
int main()
{
    float marks;
    printf("Enter total marks secured by a student: ");
    scanf("%f", &marks);
    int grade = marks / 10;
    switch (grade)
    {
    case 10:
        printf("Grade secured is O\n");
        break;
    case 9:
        printf("Grade secured is O\n");
        break;
    case 8:
        printf("Grade secured is E\n");
        break;
    case 7:
        printf("Grade secured is A\n");
        break;
    case 6:
        printf("Grade secured is B\n");
        break;
    case 5:
        printf("Grade secured is C\n");
        break;
    case 4:
        printf("Grade secured is D\n");
        break;
    default:
        printf("Grade secured is F\n");
        break;
    }
    return 0;
}