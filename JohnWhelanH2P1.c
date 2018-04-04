/* John Whelan
   CIS 190
   Homework 2
   Problem 1 */
 
#include <stdio.h>
#include <math.h>
 
void L1 (float, float, float *, float *);
void L2 (float);
void L3 (void);
void L4 (void);
 
int main (void)
{
 
    float a,b,c,d;
    float r1, r2;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&r1);
    scanf("%f",&r2);
 
    d = b * b - 4.0 * a * c;
    if(d == 0.0)
    L1(a, b ,&r1 , &r2);
 
    else if (d>0.0)
        {
        if(a != 0.0)
            {
            r1 = (-b + sqrt(d)) / (2.0 * a);
            r2 = (-b - sqrt(d)) / (2.0 * a);
            L4();
            }
        else
        L3();
        }
    else
    L2(a);
 
 
 
 
    printf("%f\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
    printf("%f\n",d);
    printf("%f\n",r1);
    printf("%f\n",r2);
 
    return 0;
    }
 
    void L1 (float a, float b, float *r1, float *r2)
    {
        if (a != 0.0)
            *r1 = *r2 = -b / (2.0 * a);
        else
            L3();
 
        L4();
    }
 
    void L2 (float a)
    {
        if ( a != 0.0)
            {printf("imaginary root\n");}
            L4();
    }
 
    void L3 (void)
    {
        printf("degenerate case\n");
    }
 
    void L4 (void) {}