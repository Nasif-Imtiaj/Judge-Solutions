#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
ll bs(ll n)
{
    ll ans=10e9,l=1,r=10e8;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll dia=(mid*(mid-3))/2;
        if(dia>=n)
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int cs=1;
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        printf("Case %d: %lld\n",cs++,bs(n));
    }
    return 0;
}

