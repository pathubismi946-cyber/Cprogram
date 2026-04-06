#include<stdio.h>
int main()
{
   int a=0 ,b=1 ,f=0 ,i=1 ,n;
   printf("enter number");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("%d\n",a);
      f=a+b;
      a=b;
      b=f;
      i=i+1;
   }
   printf("fibonnaci is %d",f);
   return 0;
}