#include<stdio.h>
void main()
{
   int num,rev=0,i;
   printf("enter the number");
   scanf("%d",&num);
   while(num!=0)
   {
     i= num%10;
     rev=rev*10+i;
     num=num/10;
   }
   printf("reverse is %d",rev);
}