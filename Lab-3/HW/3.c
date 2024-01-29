#include <stdio.h>

int main()
{
    int paisa, rupiya, temp;
    printf("Enter the amount : ");
    scanf("%d", &paisa);
    temp = paisa;
    rupiya = paisa / 100;
    paisa = temp - rupiya * 100;
    printf("%d paisa = %d Rupee and %d paisa\n", temp, rupiya, paisa);
    return 0;
}