#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j=1;
    scanf("%d",&e);
    while(e--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=b; i<=a;)
        {
            d=i;
            if(i==a)
            {
                i=1;
            }
            else
            {
                i++;
            }
            if(c==0)
            {
                break;
            }
            c--;
        }
        printf("Case %d: %d\n",j,d);
        j++;
    }
    return 0;
}
