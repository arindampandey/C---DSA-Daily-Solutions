#include <stdio.h>
int main()
{
    int a[100], n, i, j, k, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (k > 0 && k <= n)
    {
        printf("K'th Minimum element = %d\n", a[k - 1]);
        printf("K'th Maximum element = %d\n", a[n - k]);
    }
    else
    {
        printf("Invalid value of k!\n");
    }
    return 0;
}