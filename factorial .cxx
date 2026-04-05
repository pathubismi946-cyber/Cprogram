#include<stdio.h>
int main()
{
   int num,factorial=1,i;
   printf("enter the number:");
   scanf("%d",&num);
   for (i=1;i<num;i++)
   {
      factorial=factorial*i;
      i=i+1;
   }
   printf("factorial is %d",factorial);
}