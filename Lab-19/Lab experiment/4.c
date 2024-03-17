#include <stdio.h>
int getLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int checkPalindrome(char str[], int length)
{
    int ans = 1;
    int s = 0;
    int e = length - 1;
    while (s < e)
    {
        if (str[s] == str[e])
        {
            s++;
            e--;
        }
        else
        {
            ans = 0;
            break;
        }
    }
    return ans;
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf(" %[^\n]s", str);
    int length = getLength(str);
    int ans = checkPalindrome(str, length);
    if (ans)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
    return 0;
}