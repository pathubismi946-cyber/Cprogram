#include <stdio.h>

void bubbleSort(int a[], int n);   

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);   

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void bubbleSort(int a[], int n)   
{
    int i, j, temp;

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}