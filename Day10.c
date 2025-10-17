#include <stdio.h>

int main()
{
    int n, i, j;
    int a[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Leaders in the array are: ");

    for (i = 0; i < n; i++)
    {
        int isLeader = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                isLeader = 0;
                break;
            }
        }
        if (isLeader)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\n");
    return 0;
}