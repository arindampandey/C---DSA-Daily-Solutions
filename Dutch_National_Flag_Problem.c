#include <stdio.h>
int main()
{
    int a[20], n, low, mid, high, temp, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements (only 0's, 1's, and 2's):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    low = 0;
    mid = 0;
    high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else // a[mid] == 2
        {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}