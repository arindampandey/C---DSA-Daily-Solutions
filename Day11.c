#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (i != index)
            {
                temp = a[i];
                a[i] = a[index];
                a[index] = temp;
            }
            index++;
        }
    }
    int pos = index;
    int neg = 0;
    while (neg < pos && pos < n && a[neg] < 0)
    {
        temp = a[neg];
        a[neg] = a[pos];
        a[pos] = temp;
        pos++;
        neg += 2;
    }
    printf("Array after rearranging in alternating order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}