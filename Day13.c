#include <stdio.h>
int main()
{
    int n, i, j, sum;
    int a[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    printf("Pairs with the given sum %d are:\n", sum);
    int found = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("(%d, %d)\n", a[i], a[j]);
                found = 1;
            }
        }
    }
    if (found == 0)
    {
        printf("No pairs found with the given sum.\n");
    }
    return 0;
}