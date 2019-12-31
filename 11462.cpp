#include<bits/stdc++.h>
using namespace std;
long long int x[2000010];
int main()
{
    long long int a,b,c,i;

    while(scanf("%lld",&a))
    {
        if(a==0)
        {
            break;
        }
        for(i=0; i<a; i++)
        {
            scanf("%lld",&x[i]);
        }
        sort(x,x+a);
        for(i=0; i<a-1; i++)
        {
            printf("%lld ",x[i]);
        }
        printf("%lld\n",x[a-1]);

    }
    return 0;
}
