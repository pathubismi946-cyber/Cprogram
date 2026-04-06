#include <stdio.h>

int fibonacci(int n);
int main()
{
int n, f;

printf("Enter number of terms: ");  
scanf("%d", &n);
printf(" fibonacci is \n ");
f=fibonacci(n);
return 0;
}
int fibonacci (int n)
{
int a=0,b=1,i=0,fibo=0;
while(i<n)
{
    printf("%d\n",a);
fibo=a+b;
a=b;
b=fibo;
i++;
}
return fibo;
}

