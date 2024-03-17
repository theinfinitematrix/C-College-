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
int main()
{
    char str[100];
    char ans[10];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    int length = getLength(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i + 1] == ' ' || str[i + 1] == '\0')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}