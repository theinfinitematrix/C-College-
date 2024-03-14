#include <stdio.h>
int checkFibonacci(int num)
{
    int ans = 0;
    int first = 0;
    int second = 1;
    int curr = 1;
    while (curr <= num)
    {
        int temp = curr;
        curr = first + second;
        first = second;
        second = curr;
        if (curr == num)
        {
            ans = 1;
        }
    }
    return ans;
}
int main()
{
    int num;
    printf("Enter the number to test whether it is in Fibonacci sequence: ");
    scanf("%d", &num);
    int ans = checkFibonacci(num);
    if (ans == 1)
    {
        printf("Entered number: %d\n", num);
        printf("Number is in Fibonacci Sequence: Yes\n");
    }
    else
    {
        printf("Entered number: %d\n", num);
        printf("Number is in Fibonacci Sequence: No\n");
    }
    return 0;
}