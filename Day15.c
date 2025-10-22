#include <stdio.h>
int main()
{
    int n, i, sum = 0, total;
    int a[100];
    printf("Enter the value of n (range 1 to n): ");
    scanf("%d", &n);
    printf("Enter %d elements (from 1 to %d, with one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    total = n * (n + 1) / 2;  
    printf("The missing number is: %d\n", total - sum);
    return 0;
}