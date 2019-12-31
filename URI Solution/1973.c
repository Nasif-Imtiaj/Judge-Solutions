#include<stdio.h>
long long int ara[2000000];
int attacked[2000000];
int main()
{
    long long int a,sum=0,z=0,i,w=0;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld",&ara[i]);
        sum+=ara[i];
    }
    i=0;
    while(i>-1 && i<a)
    {
        attacked[i]=1;
        if(ara[i]==0)
            break;
        if(ara[i]%2==0)
        {
            ara[i]-=-1;
            i--;
        }
        else
        {
            ara[i]-=1;
            i++;
        }

        z++;
    }
    sum-=z;
    for(i=0;i<a;i++)
        if(attacked[i]==1) w++;
    printf("%lld %lld\n",w,sum);
    return 0;
}
