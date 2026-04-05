#include <stdio.h>
#include <math.h>

#define PI 3.14

float diameter(float,float,float,float);
float area(float);
float perimeter(float);

int main()
{
    float x1,y1,x2,y2;
    float D,A,R,P;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f",&x1,&y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f",&x2,&y2);

    D = diameter(x1,y1,x2,y2);
    
    A = area(D);
    P = perimeter(D);

    printf("Diameter is %f\n",D);
    printf("Area of circle is %f\n",A);
    printf("Circumference is %f\n",P);

    return 0;
}

float diameter(float x1,float y1,float x2,float y2)
{
    float D;
    D = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    float R =D/2;
    return D;
    printf("The radius is:%f",R);
    printf("The radius is:%d",int(R));
}

float area(float d)
{
    float r,A;
    
    A = PI * pow(r,2);
    return A;
}

float perimeter(float d)
{
    float r,P;
    
    P = 2 * PI * r;
    return P;
}