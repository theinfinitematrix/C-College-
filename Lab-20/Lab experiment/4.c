#include <stdio.h>
#include <string.h>
void delete(char str[], int index, int sublength)
{
    int length = strlen(str);
    for (int i = 0; i < length - sublength; i++)
    {
        str[i + index] = str[i + sublength + index];
    }
    str[length - sublength] = '\0';
}
void removeSpaces(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            while (str[i + 1] == ' ')
            {
                delete (str, i + 1, 1);
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    removeSpaces(str);
    printf("Output: %s\n", str);
    return 0;
}