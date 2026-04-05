#include <stdio.h>
#include <math.h>
#define PI 3.14159   
float diameter(float,float,float,float);
float  area(float);
float perimeter(float);
int main()
{
    float x1, y1, x2, y2;
    float D, A,P;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f",&x2,&y2);
    D = diameter(x1,y1,x2,y2);
    A = area(r,PI);
    P = perimeter(r,PI);
    printf("diameter is %f\n",D);
    printf("Area of circle is %f\n",A);
    printf("Circumference is %f\n",P);
    return 0;
}
float diameter(float x1,float x2,float y1,float y2)
{
    float D;
    D = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return D;
}
float area;
{
    float r;
    r = (float)d/2;     
    A= PI *pow(r,2) ;
    return A;
}
float perimeter;
{
    float r;
    r = (float)d/2;     
    P=2*PI*r;  
    return P;
}