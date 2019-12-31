#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
    //freopen("output.txt", "w", stdout);
    long long int n,s2,r2,s3,r3,s4=0,r4,i;

    while(cin>>n)
    {
        s4=0;
        s2=(n*(n + 1)*(2*n + 1))/6;
        r2= (n+1)*n/2*(n+1)*n/2 - s2;
        s3=n*(n+1)/2*n*(n+1)/2;
        r3=(n+1)*n/2*(n+1)*n/2*(n+1)*n/2 - s3;
        for(i=1; i<=n; i++)
            s4+=i*i*i*i;
        r4=(n+1)*n/2*(n+1)*n/2*(n+1)*n/2*(n+1)*n/2 - s4;
        printf("%lld %lld %lld %lld %lld %lld\n",s2,r2,s3,r3,s4,r4);
    }
    return 0;
}
