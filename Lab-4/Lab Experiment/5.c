#include <stdio.h>

int main()
{
    float buying, selling, marked, discount, deal;
    printf("Enter the buying price: ");
    scanf("%f", &buying);
    printf("Enter the marked price: ");
    scanf("%f", &marked);
    printf("Enter the discount: ");
    scanf("%f", &discount);
    selling = marked - marked * discount / 100;
    if (buying > selling)
    {
        deal = (buying - selling) / (buying) * (100);
        printf("Seller made a loss of %.2f%%.\n", deal);
    }
    else
    {
        deal = (selling - buying) / (buying) * (100);
        printf("Seller made a gain of %.2f%%.\n", deal);
    }
    return 0;
}