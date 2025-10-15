#include <stdio.h>
int main()
{
    int n, i;
    int a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_so_far = a[0];
    int current_sum = a[0];

    for (i = 1; i < n; i++)
    {
        if (current_sum + a[i] > a[i])
            current_sum = current_sum + a[i];
        else
            current_sum = a[i];
        if (current_sum > max_so_far)
            max_so_far = current_sum;
    }
    printf("Maximum subarray sum = %d\n", max_so_far);
    return 0;
}