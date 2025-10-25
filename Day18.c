#include <stdio.h>
int main()
{
    int n, a[100];
    int leftMax[100], rightMax[100];
    int i, water = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the heights of bars:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    leftMax[0] = a[0];
    for (i = 1; i < n; i++)
        leftMax[i] = (a[i] > leftMax[i - 1]) ? a[i] : leftMax[i - 1];
    rightMax[n - 1] = a[n - 1];
    for (i = n - 2; i >= 0; i--)
        rightMax[i] = (a[i] > rightMax[i + 1]) ? a[i] : rightMax[i + 1];
    for (i = 0; i < n; i++)
    {
        int min = (leftMax[i] < rightMax[i]) ? leftMax[i] : rightMax[i];
        water += (min - a[i]);
    }
    printf("Total trapped water: %d units\n", water);
    return 0;
}