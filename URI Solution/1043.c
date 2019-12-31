#include<stdio.h>
int main()
{
    double a,b,c,x,y,z;
    scanf("%lf %lf %lf", &a, &b, &c);
    if((a<b+c) && (b<a+c) && (c<a+b)){
        z=a+b+c;
        printf("Perimetro = %.1lf\n",z);
    }
    else {
        z=(((a+b)*c)/2);

        printf("Area = %.1lf\n",z);
    }
    return 0;
}
