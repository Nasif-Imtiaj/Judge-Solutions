#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
ll algo(ll a,ll cnt,ll lim)
{
    if(a==1)
        return cnt+1;
    if(a>lim)
        return cnt;
    if(a%2==0)
        return algo(a/2,cnt+1,lim);
    else
        return algo(3*a+1,cnt+1,lim);
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,c,d,i,j,k,z=1;
    while(cin>>a>>c)
    {
        if(a<0 && c<0)
            break;
        b=algo(a,0,c);
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",z,a,c,b);
        z++;
    }
    return 0;
}
