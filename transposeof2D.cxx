#include<stdio.h>
int main()
{
  int a[100][100],i,j,m,n;
  printf("enter the rowsize and columnsize");
  scanf("%d%d",&m,&n);
  printf("enter the matrix element");
  for (i=0;i<m;i++)
  {
    for (j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  } 
  for (i=0;i<m;i++)
  {
    for (j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("the transpose of the given matrix is\n");
  for (i=0;i<n;i++)
  {
     for (j=0;j<m;j++)
     {
       printf("%d\t",a[j][i]);
     }
     printf("\n");
  }
}