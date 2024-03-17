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
void concatenateString(char str1[], char str2[])
{
    int length1 = getLength(str1);
    int length2 = getLength(str2);

    str1[length1] = ' ';
    for (int i = 0; i < length2; i++)
    {
        str1[length1 + i + 1] = str2[i];
    }
    str1[length1 + length2 + 1] = '\0';
}
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string1: ");
    scanf(" %[^\n]s", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]s", str2);
    concatenateString(str1, str2);
    printf("Resultant string: %s\n", str1);
    return 0;
}