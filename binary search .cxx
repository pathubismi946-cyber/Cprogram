#include <stdio.h>
int main()
{
    int a[100], n, i, search, found;
    int low, high, mid;
    printf("enter the limit");
    scanf("%d", &n);
    printf("enter the sorted element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element to search ");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == search)
        {
            printf("element found at position %d", mid);
            found = 1;
            break;
        }
        else if (a[mid] < search)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    if (found != 1)
    {
        printf("\n not found");
    }
    return 0;
}