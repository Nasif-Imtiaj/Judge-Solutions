#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    while(scanf("%d",&a)!=EOF)
    {
        c+=a;
        a=a+1;
        while(b>0)
        {
            b=a/3;
            d=a%3;
            a=b+d;
            c+=b;
        }
        printf("%d\n",c);
        c=0;
        b=100;
    }
    return 0;
}
