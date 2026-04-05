/*bismi fathima
dep of statistics*/

#include <stdio.h>

int main()
{
    int a, b, c, *p1, *p2, *p3;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if (*p1 > *p2)
    {
        if (*p1 > *p3)
        {
            printf("%d is greater", *p1);
        }
        else
        {
            printf("%d is greater", *p3);
        }
    }
    else
    {
        if (*p2 > *p3)
        {
            printf("%d is greater", *p2);
        }
        else
        {
            printf("%d is greater", *p3);
        }
    }

    return 0;
}