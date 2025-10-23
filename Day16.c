#include <stdio.h>
int main()
{
    int n, i, j, a[20], found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Duplicate elements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                printf("%d\n", a[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found)
    {
        printf("No duplicate elements found.\n");
    }
    return 0;
}