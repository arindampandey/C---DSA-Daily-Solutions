#include <stdio.h>
int main()
{
    int n, i, count = 0, a[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[(i + 1) % n])
            count++;
    }
    if (count == 1)
        printf("The array is sorted and rotated.\n");
    else
        printf("The array is not sorted and rotated.\n");
    return 0;
}
