#include <stdio.h>
void getBinary(int num, int *binary)
{
    // Base condition
    if (num == 1)
    {
        *binary = 1;
        return;
    }
    if (num == 0)
    {
        *binary = 0;
        return;
    }
    // Processing
    int temp = num % 2;
    getBinary(num / 2, binary);
    *binary = (*binary) * 10 + temp;
    return;
}
int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    int binary = 0;
    getBinary(num, &binary);
    printf("Outpu: %d\n", binary);
    return 0;
}