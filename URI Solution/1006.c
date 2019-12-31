#include<stdio.h>
int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C)==3;
    A=A*2;
    B=B*3;
    C=C*5;
    printf("MEDIA = %0.1lf\n", (A+B+C)/(2+3+5));
    return 0;
}

