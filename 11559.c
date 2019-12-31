#include<stdio.h>
int main()
{
    long int a,b,c,d,e,i,j,k,x[100],z=0,y[100],w=0,l=1,p=0;
    while(p=0,l=1,w=0,scanf("%d %d %d %d",&a,&b,&c,&d)==4){
    for(i=0; i<c; i++)
    {
        scanf("%d",&e);
        for(z=0, j=0; j<d; j++)
        {
            scanf("%d",&x[j]);
            if(x[j]>=a)
            {
                z++;
            }
        }
        if(z==a)
        {
            y[w]=e*a;
            w++;
            l++;
        }

    }

    if(l>1)
    {
        for(k=0; k<l; k++)
        {
            if(y[k]<b)
            {
                printf("%d\n",y[k]);
                p=1;
                break;

            }

        }
    }
    if(p==0)
    {
        printf("stay home\n");
    }
    }
    return 0;
}
