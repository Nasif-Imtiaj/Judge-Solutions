#include<stdio.h>
int main()
{
    int a,b,c=0,e,f,i,z=0;
    int d[100000];
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0; i<a; i++)
        {
            scanf("%d",&d[i]);
            z++;
        }
        for(b=0; b<z-1; b++)
        {
            while(1)
            {
                c=0;
                for(f=0; f<z-1; f++)
                {
                    if(d[f]>d[f+1])
                    {
                        e=d[f];
                        d[f]=d[f+1];
                        d[f+1]=e;
                        c=1;
                    }
                }
                if(c==0)
                {
                    break;
                }
            }
        }
        if(d[z-1]>=20)
        {
            printf("3\n");
        }
        else if(d[z-1]>=10 && d[z-1]<20)
        {
            printf("2\n");
        }
        else if(d[z-1]<10)
        {
            printf("1\n");
        }
        z=0;
    }


    return 0;
}
