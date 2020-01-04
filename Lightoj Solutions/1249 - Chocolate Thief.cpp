#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,i,j,t,r,y[10000],p=0,q=10000000,w,z;
    char x[200][200];
    scanf("%d",&t);
    for(r=1; r<=t; r++)
    {
        scanf("%d",&a);
        for(i=0; i<a; i++)
        {
            scanf("%s %d %d %d",x[i],&b,&c,&d);
            y[i]=b*c*d;
        }
        for(j=0; j<a; j++)
        {
            if(y[j]<q)
            {
                q=y[j];
                w=j;
            }
            if(y[j]>p)
            {
                p=y[j];
                z=j;
            }
        }
        if(p>q)
        {
            printf("Case %d: %s took chocolate from %s\n",r,x[z],x[w]);
        }
        else
        {
            printf("Case %d: no thief\n",r);
        }
        p=0;
        q=10000000;
    }
    return 0;
}
