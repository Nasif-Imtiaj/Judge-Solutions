#include<stdio.h>
int main()
{
    long long int a,b,c,d,x=0,y=0,i,z=0,w=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        x=a;
        y=b;
        if(a>b)
        {
            d=b;
            b=a;
            a=d;
        }
        for(i=a; i<=b; i++)
        {
            c=i;
            while(1)
            {
                if(c==1)
                {
                    break;
                }
                if(c%2==0)
                {
                    c=c/2;
                }
                else
                {
                    c=(c*3)+1;
                }
                z++;
            }
            if(z>w)
            {
                w=z;
            }
            z=0;
        }
        printf("%lld %lld %lld\n",x,y,w+1);
        w=0;
    }
    return 0;
}
