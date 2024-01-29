#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    int asciivalue = (int)ch;
    if (asciivalue < 97)
    {
        printf("You have Entered '%c' which is already in upper case\n", ch);
    }
    else
    {
        ch = ch - 'a' + 'A';
        printf("The upper case of the entered letter is '%c' \n", ch);
    }
    return 0;
}