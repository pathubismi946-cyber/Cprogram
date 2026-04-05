#include <stdio.h>

int main()
{
    int a[10], n, i, search;

    printf("Enter limit ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("Element found at position %d",i+1);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}