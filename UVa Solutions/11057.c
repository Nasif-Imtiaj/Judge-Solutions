#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,i,j,k,e,x[100000],p=0,q=0,m=1324567;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0; i<a; i++)
        {
            scanf("%d",&x[i]);
        }
        scanf("%d",&b);
        for(i=0; i<a; i++)
        {
            for(j=1+i; j<a; j++)
                if(x[i]+x[j]==b && abs(x[j]-x[i])<m)
                {
                    m=abs(x[i]-x[j]);
                    p=x[i];
                    q=x[j];
                }
        }
        if(p>q)
        {
            k=p;
            p=q;
            q=k;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",p,q);
        p=0;
        q=0;
        m=1324567;
    }
    return 0;
}
