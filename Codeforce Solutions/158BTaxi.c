#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b,c=0,d,j,x[100000],z=0,w=0,y[100000],i;
    int p,q,r,s,t,u,v=0,m,n;
    double k,h;
    memset(y,0,100000);
    scanf("%d",&a);
    for(b=0; b<a; b++)
    {
        scanf("%d",&x[b]);
    }

    for(i=0; i<a; i++)
    {
        y[x[i]]++;
    }
    p=y[1];
    q=y[2];
    r=y[3];
    s=y[4];
    t=r-p;
    if(t>=0)
    {
        u=r;
        v=0;
    }
    else
    {
        u=r;
        v=abs(t);
    }
    m=q*2;
    m=m+v;
    k=(double)m/4;
    h=ceil(k);
    z=h+u+s;
    printf("%d\n",z);
    return 0;
}
