#include<stdio.h>
int main()
{
    int a,b,c,d,e,i;
    scanf("%d",&d);
    for(i=1; i<=d; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {
            e=a;
            a=b;
            b=e;
        }
        if(b>c)
        {
            e=b;
            b=c;
            c=e;
        }
        if(a>b)
        {
            e=a;
            a=b;
            b=e;
        }
        printf("Case %d: %d\n",i,b);

    }

    return 0;




}
