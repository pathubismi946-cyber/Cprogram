#include<stdio.h>
void main()
{
    int temp,num,rev=0,i;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        i=num%10;
        rev=rev*10+i;
        num=num/10;
    }
    printf("reverse is %d",rev);
    if (temp==rev)
    {
       printf("\nnumber is pallindrome");
    }
    else 
    {
       printf("\nnumber is not pallindrome");
    }
}