#include<stdio.h>
int main()
{
    int a,b,c,d,x[100000],i,j,z=0;
    scanf("%d %d",&a,&b);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&x[i]);
    }
    c=x[b];
    for(i=1; i<=a; i++)
    {
        if(x[i]>=c && x[i]>0)
        {
            z++;
        }
    }
    printf("%d\n",z);
    return 0;
}
