#include<stdio.h>
int main()
{
    int a,b,c,d;
    int p,q,r,s;
    int x=0,y=0,w=0,z=0,g=0,h=0,m=0,n=0;
    int i,j;
    char t1,t2,t3;
    char t4,t5,t6;
    scanf("%d",&j);
    for(i=1; i<=j; i++)
    {
        scanf("%d %c %d %d %c %d",&a,&t1,&b,&c,&t3,&d);
        scanf("%d %c %d %d %c %d",&p,&t4,&q,&r,&t6,&s);
        if(p<a && r<a)
        {
            x=1;
        }
        else if(p<a && r<=a && s<b)
        {
            y=1;
        }
        else if(p>c && r>c)
        {
            w=1;
        }
        else if(p>=c && q>d && r>c)
        {
            z=1;
        }
        else if(r<a && p>c)
        {
            g=1;
        }
        else if(r==a && s<b && p>c)
        {
            h=1;
        }
        else if(r==a && s<b && p==c && q>d)
        {
            m=1;
        }
        else if(r<a && p==c && q>d)
        {
            n=1;
        }
        else if(r==c && p==c && q>d && s>d)
        {
            n=1;
        }
        else if(r==a && p==a && q<b && s<b)
        {
            n=1;
        }
        if(w==1 || x==1 || y==1 || z==1 || g==1 || h==1 || m==1 || n==1)
        {
            printf("Case %d: Hits Meeting\n",i);
        }
        else
        {
            printf("Case %d: Mrs Meeting\n",i);
        }
        x=0;
        y=0;
        w=0;
        z=0;
        g=0;
        h=0;
        m=0;
        n=0;
    }
    return 0;
}
