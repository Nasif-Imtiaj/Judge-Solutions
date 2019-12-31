#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,c,d,i=0,e,x[100000];

    while(scanf("%lld",&a)!=EOF)
    {
        memset(x,0,100000);
        if(a<0)
        {
            break;
        }
        while(1)
        {
            b=a%3;
            a/=3;
            x[i]=b;
            i++;
            if(a<3)
            {
                break;
            }
        }
        if(a>0){
        printf("%lld",a);
        }
        for(c=i-1; c>=0; c--)
        {
            printf("%lld",x[c]);
        }
        printf("\n");
        i=0;
    }

    return 0;
}
