#include <stdio.h>
#include <string.h>
void getSubstring(char str[], char ans[], int index, int sublength)
{
    for (int i = 0; i < sublength; i++)
    {
        ans[i] = str[i + index];
    }
    ans[sublength] = '\0';
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf(" %[^\n]s", str);
    int index, sublength;
    int length = strlen(str);
    printf("Enter the index and sublength: ");
    scanf("%d %d", &index, &sublength);
    char ans[100];
    if (index + sublength <= length)
    {
        getSubstring(str, ans, index, sublength);
        printf("Sub string: %s\n", ans);
    }
    else
    {
        getSubstring(str, ans, index, length - index);
        printf("Sub string: %s\n", ans);
    }
    return 0;
}