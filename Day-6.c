#include <stdio.h>
int main()
{
    int a[20], b[20], unionArr[40];
    int n1, n2, i, j, k = 0;
    int flag;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n1; i++)
    {
        unionArr[k] = a[i];
        k++;
    }
    for (i = 0; i < n2; i++)
    {
        flag = 0;
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            unionArr[k] = b[i];
            k++;
        }
    }
    printf("\nUnion of two arrays:\n");
    for (i = 0; i < k; i++)
        printf("%d ", unionArr[i]);
    printf("\n\nIntersection of two arrays:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}