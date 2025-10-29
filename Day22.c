#include <stdio.h>
int main()
{
    char s[30];
    int i, length = 0, flag = 0;
    printf("Enter a string: ");
    gets(s);
    while (s[length] != '\0')
        length++;
    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}