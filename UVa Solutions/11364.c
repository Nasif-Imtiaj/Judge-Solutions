#include<stdio.h>
int main()
{
    int a,b,c,d,x[10000],i,j,k,l,z=0,w=0,y,R;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        for(j=0; j<b; j++)
        {
            scanf("%d",&x[j]);

        }
        for(y=0; y<b-1; y++)
        {
            while(1)
            {
                z=0;
                for(k=0; k<b-1; k++)
                {
                    if(x[k]>x[k+1])
                    {
                        l=x[k];
                        x[k]=x[k+1];
                        x[k+1]=l;

                        z=1;
                    }

                }
                if(z==0)
                {
                    break;
                }
            }
        }
        for(w=0,j=0; j<b-1; j++)
        {
            w+=x[j+1]-x[j];

        }
        y=x[b-1]-x[0];
        R=w+y;
        printf("%d\n",R);
    }
    return 0;
}

