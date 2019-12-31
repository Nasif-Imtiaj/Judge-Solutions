#include<stdio.h>
int main()
{
    long long int a,b,x,y,z;

    scanf("%lld %lld",&a,&b);

    x=(a*(a+1))/2;
    y=(b*(b+1))/2;
    z=(y-x)+a;

    printf("%lld\n",z);


}
