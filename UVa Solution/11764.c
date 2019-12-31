#include<stdio.h>
int main()
{
    int a,b,c,d,e,x[1000],i,z=0,w=0;
    scanf("%d",&b);
    for(c=1; c<=b; c++)
    {
        scanf("%d",&a);
        for(i=0; i<a; i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0; i<a-1; i++)
        {
            if(x[i]<x[i+1])
            {
                z++;
            }
            else if(x[i]>x[i+1])
            {
                w++;
            }
        }
        printf("Case %d: %d %d\n",c,z,w);
        z=0;
        w=0;
    }
    return 0;
}
