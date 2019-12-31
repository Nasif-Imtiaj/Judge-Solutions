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
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll l,r;
        scanf("%lld %lld",&l,&r);
        if(r<l)
            swap(l,r);
        ll ans;
        if(l%4==0)
            ans=l+1;
        else if(l%4==1)
            ans=0;
        else if(l%4==2)
            ans=l;
        else if(l%4==3)
            ans=1;
        for(ll i=l+1; i<=min(l+4,r); i++)
        {
            ll val;
            if(i%4==0)
                val=i+1;
            else if(i%4==1)
                val=0;
            else if(i%4==2)
                val=i;
            else if(i%4==3)
                val=1;
            ans=ans&val;
        }
        printf("%lld\n",ans);
    }
    return 0;
}

