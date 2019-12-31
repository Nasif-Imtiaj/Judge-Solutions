#include<stdio.h>
int main()
{
    int a,b;
    double c,d,e,f;
    scanf("%d %d %lf", &a, &b, &c);
    d=b*c;
    scanf("%d %d %lf", &a, &b ,&c);
    e=b*c;
    f=d+e;
    printf("VALOR A PAGAR: R$ %.2lf\n", f);
    return 0;
}
