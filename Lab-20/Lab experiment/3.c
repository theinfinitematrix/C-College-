#include <stdio.h>

void replaceChar(char str[], char ch, int dist)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        char letter = str[i];
        if (letter == ch)
        {
            if (i - dist > 0)
            {
                str[i] = str[i - dist];
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("Enter the character: ");
    char ch;
    scanf(" %c", &ch);
    replaceChar(str, ch, 2);
    printf("Output: %s\n", str);
    return 0;
}