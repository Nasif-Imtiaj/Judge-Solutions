#include<stdio.h>
int main()
{
    int a,b,c=0,i,k=0,x[10000],w=0,j;
    char y,z;
    while(1)
    {
        scanf("%d",&x[k]);
        scanf("%c",&y);
        if(y=='\n')
            break;
        k++;
    }
    for(i=0; i<k; i++)
    {
        while(1)
        {
            c=0;
            for(j=0; j<k; j++)
            {
                if(x[j]>x[j+1])
                {
                    b=x[j];
                    x[j]=x[j+1];
                    x[j+1]=b;
                    c=1;
                }
            }
            if(c==0)
            {
                break;
            }
        }
    }
    for(i=0; i<=k; i++)
    {
        printf("%d",x[i]);
        if(i!=k)
            printf("+");
    }
    printf("\n");
    return 0;
}
