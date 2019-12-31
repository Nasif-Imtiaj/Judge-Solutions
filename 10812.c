#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0,i,j=0;
    scanf("%d",&e);
    while(e--)
    {
        scanf("%d %d",&a,&b);
        for(i=a; i>=0; i--)
        {
            c=i-j;
            d=i;
            if(c==b)
            {
                f=1;
                break;
            }
            j++;
        }
        if(f==1)
        {
            printf("%d %d\n",d,j);
        }
        else
            printf("impossible\n");
        j=0;
        f=0;
    }
return 0;
}
