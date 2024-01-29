#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    int asciivalue = (int)ch;
    if ((ch - 'a' >= 0) && (ch - 'z' <= 0))
    {
        if (ch - 'a' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'e' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'i' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'o' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'u' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else
        {
            printf("The entered character %c is consonant\n", ch);
        }
    }
    else if ((ch - 'A' >= 0) && (ch - 'Z' <= 0))
    {
        if (ch - 'A' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'E' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'I' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'O' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else if (ch - 'U' == 0)
        {
            printf("The entered character %c is vowel\n", ch);
        }
        else
        {
            printf("The entered character %c is consonant\n", ch);
        }
    }
    else
    {
        printf("The entered character %c is not an alphabet\n", ch);
    }
}