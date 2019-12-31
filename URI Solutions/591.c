#include<stdio.h>
int main()
{
    int a,b,w=0,z=0,c,d,e,i,j=1,x[100000],y[100000];
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        for(i=0; i<a; i++)
        {
            scanf("%d",&x[i]);
            w+=x[i];
        }
        b=w/a;
        for(i=0; i<a; i++)
        {
            if(x[i]<b)
            {
                z+=b-x[i];
            }
        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",z);
        j++;
        w=0;
        z=0;
    }
    return 0;
}
