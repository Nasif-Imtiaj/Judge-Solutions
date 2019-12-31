#include<stdio.h>
int main()
{
    int a,i;
    double b,c,d,e,f,g,h;

    scanf("%d", &a);

    for(i=0;i<a;i++){
        scanf("%lf %lf %lf",&b,&c,&d);
        e=b*2;
        f=c*3;
        g=d*5;
        h=(e+f+g)/10;
        printf("%0.1lf\n",h);

    }
    return 0;



}
