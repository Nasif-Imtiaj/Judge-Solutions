#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,i,j,x[100000],y[100000];
    scanf("%d",&d);
    while(d--)
    {
        memset(y,0n,100);
        scanf("%d",&a);
        for(i=1; i<=a; i++)
        {
            c=i;
            while(c!=0)
            {
                b=c%10;
                c/=10;
                y[b]++;
            }
        }
        for(i=0; i<9; i++)
        {
            printf("%d ",y[i]);
        }
        printf("%d\n",y[9]);
    }
    return 0;
}
