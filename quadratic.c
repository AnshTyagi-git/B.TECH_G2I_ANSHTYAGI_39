#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x1,x2,d,e;
    printf("Real roots Calculator\n");
    printf("Enter the coefficient of x²:");
    scanf("%f",&a);
    printf("Enyter the coefficient of x:");
    scanf("%f",&b);
    printf("Enter the constant coefficient:");
    scanf("%f",&c);
    d=pow(b,2)-4*a*c;
    e=sqrt(d);
    x1=(-b+e)/(2*a);
    x2=(-b-e)/(2*a);
    printf("The roots of the equation are %f and %f",x1,x2);

    return 0;
}