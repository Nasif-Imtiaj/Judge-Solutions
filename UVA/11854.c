#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    double x,y;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        if(a<b)
        {
            d=b;
            b=a;
            a=d;

        }
        if(b<c)
        {
            d=c;
            c=b;
            b=d;
        }
        if(a<b)
        {
            d=b;
            b=a;
            a=d;

        }
        x=sqrt(b*b+c*c);

        if(x==a)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
