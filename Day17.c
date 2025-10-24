#include <stdio.h>
int main()
{
    int n1, n2, a[100], b[100];
    int i = 0, j = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements for first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements for second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    i = 0, j = 0;
    printf("Intersection of the two arrays:\n");
    while (i < n1 && j < n2)
    {
        if (a[i] == b[j])
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    return 0;
}