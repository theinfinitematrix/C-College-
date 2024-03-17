#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int arr[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'A' + 'a';
        }
        if (ch >= 'a' && ch <= 'z')
        {
            int index = (int)ch - 'a';
            arr[index]++;
        }
    }
    printf("Frequency of characters: \n");
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            char ch = (char)i + 'a';
            printf("%c = %d, ", ch, arr[i]);
        }
    }
    return 0;
}