#include <stdio.h>
void findLargestWord(char str[])
{
    int index = 0;
    int tempindex = 0;
    int length = 0;
    int templength = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            templength = 0;
            tempindex = i + 1;
        }
        else
        {
            templength++;
            if (length < templength)
            {
                length = templength;
                index = tempindex;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", str[i + index]);
    }
}
int main()
{
    char str[100];
    printf("Enter the sentence: ");
    scanf(" %[^\n]", str);
    findLargestWord(str);
    return 0;
}