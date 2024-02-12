#include <stdio.h>
int main()
{
    float maths, phy, chem, total;
    printf("Input the marks obtained in physics: ");
    scanf("%f", &phy);
    printf("Input the marks obtained in chemistry: ");
    scanf("%f", &chem);
    printf("Input the marks obtained in mathematics: ");
    scanf("%f", &maths);
    total = phy + maths + chem;
    if (total >= 190)
    {
        if ((maths + phy) >= 140)
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