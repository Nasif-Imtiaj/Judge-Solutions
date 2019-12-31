#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a<0 || b<0)
        {
            break;
        }
        if(a>b)
        {
            e=a;
            a=b;
            b=e;
        }
        c=b-a;
        if(c<=50)
        {
            d=b-a;
        }
        else
        {
            d=(a+100)-b;
        }
        printf("%d\n",d);

    }
    return 0;
}
