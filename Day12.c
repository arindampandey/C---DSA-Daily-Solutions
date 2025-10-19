#include <stdio.h>
int main()
{
    int n, i, k, count = 0;
    int a[25];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to count occurrences of: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
            count++;
    }
    printf("The element %d occurs %d times.\n", k, count);
    return 0;
}