#include <stdio.h>
int main()
{
    float math, phy, chem, total;
    printf("Input the marks obtained in Physics: ");
    scanf("%f", &phy);
    printf("Input the marks obtained in chemistry: ");
    scanf("%f", &chem);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%f", &math);
    total = math + phy + chem;
    if (total >= 190)
    {
        if (total - chem >= 140)
        {
            printf("The candidate is eligible for admission\n");
        }
    }
    else
    {
        printf("The candidate is not eligible for admission\n");
    }
    return 0;
}