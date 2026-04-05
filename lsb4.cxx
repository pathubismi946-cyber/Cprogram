 #include <stdio.h>
#include <math.h>
 void findsine(float x);
 void findcosine(float x);
 void sum();
    int main()
    {
        float x;
        printf("Enter the value of angle (in radians): ");
        scanf("%f", &x);
        findsine(x);
        findcosine(x);
        sum();
        return 0;
    }
    void findsine(float x)
    {
        float term = x; 
        float sum = x; 
        int i = 1;
        while (fabs(term) >= 0.000001)
        {
             
            term = -term * (x * x) / ((2*i) * (2*i + 1));
            sum += term;
            i++; 

         }
        printf("sin(%f) = %f\n", x, sum);
    }

    void findcosine(float x)
    {
        float term = 1; 
        float sum = 1; 
        int i = 0; 
        {
            i =i+2; 
            term = -term * (x * x) / (i*(i-1)); 
            sum += term; 
            
        }
        printf("cos(%f) = %f\n", x, sum);
    } 
    void sum()
    {
        int n;
        printf("Enter the value of n:\n ");
        scanf("%d", &n);
        double result = 0; 
        for (int i = 1; i <= n; i++)
        {
            result += pow((double)1/i, i);
        }
        printf("SUM = %lf\n", result);
    }