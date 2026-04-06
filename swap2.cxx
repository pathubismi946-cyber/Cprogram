#include <stdio.h>

int swap(int , int ); 

int main() {
    int x, y,s;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

   s= swap(x, y); 
   printf("swap is %",s);

    return 0;
}


int swap(int x, int y) {
    int temp;
    
    temp = x;
    x= y;
    y = temp;

    
    printf(" x = %d, y = %d\n", x, y);
}
