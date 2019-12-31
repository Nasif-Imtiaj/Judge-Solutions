#include<stdio.h>
int main()
{
    int a,b,c,d,w=0,j,i;
    scanf("%d",&a);
    for(j=1; j<=a; j++)
    {
        scanf("%d %d",&b,&c);
        for(i=b; i<=c; i++)
        {
            if(i%2!=0)
            {
                w+=i;
            }
        }
        printf("Case %d: %d\n",j,w);
        w=0;
    }
    return 0;
}
