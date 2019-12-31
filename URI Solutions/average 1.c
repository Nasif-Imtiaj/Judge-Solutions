#include<stdio.h>
int main()
{
    double A, B;

    scanf("%lf %lf", &A, &B)==2;
    A=A*3.5;
    B=B*7.5;
    printf("MEDIA = %0.5lf\n", (A+B)/(3.5+7.5));
    return 0;
}
