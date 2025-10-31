#include <stdio.h>
void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void permute(char str[], int start, int end)
{
    int i;
    if (start == end)
        printf("%s\n", str);
    else
    {
        for (i = start; i <= end; i++)
        {
            swap(&str[start], &str[i]);    
            permute(str, start + 1, end);  
            swap(&str[start], &str[i]);   
        }
    }
}
void main()
{
    char str[50];
    int len = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[len] != '\0')
        len++;
    printf("All permutations are:\n");
    permute(str, 0, len - 1);
}