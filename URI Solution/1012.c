#include<stdio.h>
int main()
{
    double a,b,c,z;
    scanf("%lf %lf %lf", &a, &b, &c);
    z=a*c*1/2;
    printf("TRIANGULO: %.3lf\n",z);
    z=3.14159*c*c;
    printf("CIRCULO: %.3lf\n",z);
    z=((a+b)/2)*c;
    printf("TRAPEZIO: %.3lf\n",z);
    z=b*b;
    printf("QUADRADO: %.3lf\n",z);
    z=a*b;
    printf("RETANGULO: %.3lf\n",z);
    return 0;
}
