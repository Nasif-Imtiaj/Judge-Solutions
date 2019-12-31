#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float c,d;
    scanf("%f", &c);
    d=b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf\n",d);
    return 0;

}
