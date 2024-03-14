#include <stdio.h>
int fibonacci(int term)
{
    if (term == 1)
    {
        return 0;
    }
    if (term == 2)
    {
        return 1;
    }
    int ans = fibonacci(term - 1) + fibonacci(term - 2);
    return ans;
}
int main()
{
    int term;
    printf("Enter Fibonacci term serial number: ");
    scanf("%d", &term);
    int ans = fibonacci(term);
    printf("Fibonacci number: %d\n", ans);
    return 0;
}