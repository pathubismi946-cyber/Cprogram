#include <stdio.h>

int main() {
    int x, y, tmp;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    
    tmp = x; 
    x = y;     
    y = tmp; 

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
