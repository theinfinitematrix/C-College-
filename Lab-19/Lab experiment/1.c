#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    printf("Entered string: %s\n", str);
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
    printf("length of the string is %d\n", size);
    return 0;
}