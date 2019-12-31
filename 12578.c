#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main()
{
    int a,b,c,d,e;
    double x,y,z,t,r;
    scanf("%d",&b);
    while(b--)
    {
        scanf("%d",&a);
        x=a*(6*.10);
        y=a*(2*.10);
        z=x*a;
        r=PI*y*y;
        t=(z-r);
        printf("%.2lf %.2lf\n",r,t);
    }

    return 0;
}
