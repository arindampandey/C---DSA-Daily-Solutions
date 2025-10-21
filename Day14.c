#include <stdio.h>
int main()
{
    int n, i, j, sum, currentSum;
    int a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    int found = 0;
    for (i = 0; i < n; i++)
    {
        currentSum = 0;
        for (j = i; j < n; j++)
        {
            currentSum += a[j];

            if (currentSum == sum)
            {
                printf("Subarray found between indexes %d and %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }
    if (!found)
        printf("No subarray with the given sum found.\n");

    return 0;
}