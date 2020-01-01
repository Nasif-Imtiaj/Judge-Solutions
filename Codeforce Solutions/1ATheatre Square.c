#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,e,e1,f,g,h,z=0,m=0,n=0;
    double x,y,p,q;
    scanf("%lld %lld %lld",&a,&b,&c);
    x=(double)a/(double)c;
    x=ceil(x);
    y=(double)b/(double)c;
    y=ceil(y);
    z=x*y ;
    printf("%lld",z);
    return 0;
}
