/*find the largest element in an array using pointers*/
#include <stdio.h>
#define SIZE 10

int main()
{
    int a[100], *p, max,n, i;
    

    printf("Enter  limit:\n");
    scanf("%d",&n);
    printf("enter element");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

   p=a;
   max=*p;

    for( max=*p,i=1; i<n; i++)
    {
        if(*(p+i) > max)
            max = *(p+i);
    }

    printf("The largest element is: %d\n", max);
    return 0;
}