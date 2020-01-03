#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = 1000000007;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
ll fact[2000005],inverse[1000005];
ll Bigmod(int a,int b)
{
    if(b==0)
        return 1%MOD;
    ll x=Bigmod(a,b/2);
    x=(x*x)%MOD;
    if(b%2==1)
        x=(x*a)%MOD;
    return x;
}
ll nCr(int x, int y)
{

    return fact[x+y-1] * (inverse[x] * inverse[y-1] % MOD) % MOD;
}
int main()
{
//freopen("output.txt", "w", stdout);

    fact[0]=1;
    for(int i=1; i<=2000000; i++)
        fact[i]=fact[i-1]*1LL*i%MOD;
    inverse[1000000]=Bigmod(fact[1000000],MOD-2);
    for(int i=1000000; i>0; i--)
    {
        inverse[i-1]=i* 1LL*inverse[i] % MOD;
    }
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %lld\n",cs++,nCr(a,b));
    }
    return 0;
}


