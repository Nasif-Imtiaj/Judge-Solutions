#include<stdio.h>
int main()
{
    int c=0;
    double N[100],a;
    scanf("%lf",&a);
    N[c]=a;

    for(c=0;c<100;c++){
       printf("N[%d] = %.4lf\n",c,N[c]);
       a/=2;
       N[c+1]=a;
}
    return 0;
}
