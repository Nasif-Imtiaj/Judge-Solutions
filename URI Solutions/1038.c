#include<stdio.h>
int main ()
{
    int x, y;
    double a, b, c, d, e;
    scanf("%d %d", &x, &y);
    a=4.00;
    b=4.5;
    c=5.00;
    d=2.00;
    e=1.50;
    if (x==1) {
        printf("Total: R$ %.2lf\n",a*y);
    }
    if (x==2){
        printf("Total: R$ %.2lf\n",b*y);
    }
    if (x==3){
        printf("Total: R$ %.2lf\n",c*y);
    }
    if (x==4) {
        printf("Total: R$ %.2lf\n",d*y);
    }
    if (x==5){
        printf("Total: R$ %.2lf\n",e*y);
    }
    return 0;
}
