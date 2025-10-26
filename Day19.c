#include <stdio.h>
void mergeArrays(int a[], int b[], int n, int m)
{
    int i = n - 1;
    int j = 0;
    int temp;
    while (i >= 0 && j < m)
    {
        if (a[i] > b[j])
        {
            temp = a[i];
            a[i] = b[j];
            b[j] = temp;
        }
        i--;
        j++;
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
    for (i = 0; i < m - 1; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

int main()
{
    int a[100], b[100];
    int n, m, i;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &m);
    printf("Enter %d elements in sorted order:\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    mergeArrays(a, b, n, m);

    printf("\nMerged arrays without extra space:\n");
    printf("First array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSecond array: ");
    for (i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}