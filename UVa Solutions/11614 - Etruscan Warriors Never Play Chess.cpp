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
    ll mx=0,l=1,r=10000000000;
    while(l<=r)
    {
       ll mid=(l+r)/2;
       if((mid*(mid+1)/2)<=n){
        mx=max(mx,mid);
        l=mid+1;
       }
       else
        r=mid-1;
    }
return mx;
}
int main()
{
//freopen("output.txt", "w", stdout);
     int t;
     scanf("%d",&t);
     while(t--){
        ll n;
        scanf("%lld",&n);
        printf("%lld\n",bs(n));
     }

    return 0;
}
