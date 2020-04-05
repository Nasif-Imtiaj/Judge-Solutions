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
ll res(int n,int k)
{
    if(k>n )
        return 0;
    ll ans=1;
    for(int i=n; i>n-k; i--)
        ans*=i;
    for(int i=1; i<=k; i++)
        ans/=i;
    for(int i=n; i>n-k; i--)
        ans*=i;
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        printf("Case %d: %lld\n",cs,res(n,k));
    }
    return 0;
}
