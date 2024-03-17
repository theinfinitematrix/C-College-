#include <stdio.h>
#include <string.h>
void solve(char str[])
{
    int length = strlen(str);
    int vowel = 0;
    int consonant = 0;
    int lines = 0;
    int word = 0;
    int character = 0;
    if (str[0] != ' ')
    {
        word++;
    }
    for (int i = 0; i < length; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
            character++;
        }
        else if ('a' <= ch && ch <= 'z')
        {
            consonant++;
            character++;
        }
        else if (ch == '\n')
        {
            lines++;
        }
        else if (ch == ' ')
        {
            word++;
        }
        else
        {
            character++;
        }
    }
    printf("Vowels = %d, consonants = %d, new lines = %d,total number of characters = %d , Total words = %d\n", vowel, consonant,
           lines, character, word);
}
int main()
{
    char str[100];
    printf("Enter the sentence: ");
    scanf("%[^\n]", str);
    solve(str);
    return 0;
}
