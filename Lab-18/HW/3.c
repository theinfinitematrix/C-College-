#include <stdio.h>
#include <string.h>
int getSize(char *str)
{
    int size = 0;
    for (int i = 0; i < 100; i++)
    {
        if (str[i] != '\0')
        {
            size++;
        }
        else
        {
            break;
        }
    }
    return size;
}
void swap(char *str, int i, int j)
{
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
void reverseString(char *str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str, s, e);
    reverseString(str, s + 1, e - 1);
    return;
}
int main()
{
    char str[100];
    printf("Input: ");
    scanf("%[^\n]s", str);
    int size = getSize(str);
    reverseString(str, 0, size - 1);
    printf("Output: %s\n", str);
    return 0;
}