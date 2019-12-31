#include<stdio.h>
#include<math.h>
int main()
{
    int c,d;
    scanf("%d",&d);
    for(c=0; c<d; c++)
    {
        int z,i=0,b[1000];
        long long int a,x,y,f,g,h,k;
        scanf("%d",&z);
        x=z*567;
        y=x/9;
        f=y+7492;
        g=f*235;
        h=g/47;
        k=h-498;
        if(k<0)
        {
            a=abs(k);
        }
        else
        {
            a=k;
        }
        while(a>0)
        {
            b[i]=a%10;
            a/=10;
            i++;
            if(i==2)
            {
                printf("%d\n",b[i-1]);
                break;
            }
        }
    }
    return 0;



}

