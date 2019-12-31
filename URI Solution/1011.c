#include<stdio.h>
int main()
{
    double R,Z;
    scanf("%lf", &R);
    Z=4/3.0*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n",Z);
    return 0;
}
