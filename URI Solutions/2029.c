#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    c=3.14;
    while(scanf("%lf %lf",&a,&b)!=EOF){

            d=(b/2);
            e=(a/(c*(d*d)));
            f=(c*(d*d));
            printf("ALTURA = %.2lf\n",e);
            printf("AREA = %.2lf\n",f);
            }

    return 0;





}
