#include <stdio.h>
void readMatrix(int a[100][100], int m, int n);
void secondLargest(int a[100][100], int m, int n);

int main()
{
    int a[100][100], m, n,i, j;
    printf("Enter the value of the matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++)
         {
            scanf("%d", &a[i][j]);
        }
    }
    readMatrix(a, m, n);
    secondLargest(a, m, n);
    return 0;
}
void readMatrix(int a[100][100], int m, int n){
    int i, j, k;
    int foundSP = 0;
    printf("\nSaddle points in the matrix:\n");
    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++)
         {
            int SP = 1;
            for (k = 0; k < n; k++)
             {
                if (a[i][k] < a[i][j]) 
                {
                    SP = 0;
                    break;
                }
            }
            
            if(SP==1) 
            {
                for (k = 0; k < m; k++) 
              {
                if (a[k][j] > a[i][j]) {
                    SP = 0;
                    break;
                }
              }
           }
            if (SP==1) 
            {
                printf("Saddle point found at (%d, %d): %d\n", i, j, a[i][j]);
                foundSP = 1;
            }
           
        }
    }
    if (foundSP==0)
    {
        printf("\n No saddle point found.\n");
    }
}
void secondLargest(int a[100][100], int m, int n)
{int i, j;
    int largest = a[0][0];
    int secondLargest = a[0][0];
    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++)
         {
            if (a[i][j] > largest) 
            {
                secondLargest = largest;
                largest = a[i][j];
            }
             else if ( a[i][j] != largest && (secondLargest == largest || a[i][j] > secondLargest)) 
            {
                secondLargest = a[i][j];
            }
        }
    }
    printf("\nSecond largest element in the matrix: %d\n", secondLargest);
}