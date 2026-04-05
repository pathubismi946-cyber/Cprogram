#include <stdio.h>

int main()
{
    int choice, n, i;
    int a[100], sum = 0, product = 1;
    int search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nChoose operation:\n");
    printf("1. Sum\n");
    printf("2. Product\n");
    printf("3. Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
            {
                sum += a[i];
            }
            printf("Sum = %d", sum);
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
                product *= a[i];
            }
            printf("Product = %d", product);
            break;

        case 3:
            printf("Enter number to search: ");
            scanf("%d", &search);

            for(i = 0; i < n; i++)
            {
                if(a[i] == search)
                {
                    found = 1;
                    break;
                }
            }

            if(found == 1)
                printf("Element found at position %d", i + 1);
            else
                printf("Element not found");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}