#include <stdio.h>

int main()
{
    int a[100][100], i, j,n;
    printf("enter limit");
    scanf("%d",&n);

    printf("Enter matrix elements:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}