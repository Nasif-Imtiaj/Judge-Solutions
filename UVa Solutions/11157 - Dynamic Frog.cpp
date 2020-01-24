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
ll arr[105],type[105],used[105],ans;
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        ll n,d;
        scanf("%lld %lld",&n,&d);

        for(int i=0; i<n; i++)
        {
            string s;
            stringstream ss;
            char x;
            ll a;
            cin>>s;
            s[1]=' ';
            ss<<s;
            ss>>x;
            ss>>a;
            if(x=='S')
                type[i]=1;
            else
                type[i]=2;
            arr[i]=a;
            used[i]=0;
        }
        ll last=0,mx=0,taken_once=0;
        for(int i=0; i<n; i++)
        {
            if(type[i]==2)
            {
                ll cur=arr[i]-last;
                last=arr[i];
                mx=max(mx,cur);
                taken_once=0;
            }
            else
            {
                if(taken_once)
                    taken_once=0;
                else
                {
                    used[i]=1;
                    taken_once=1;
                    ll cur=arr[i]-last;
                    last=arr[i];
                    mx=max(mx,cur);
                }
            }
        }
        mx=max(mx,d-last);
        last=d,taken_once=0;
        for(int i=n-1; i>=0; i--)
        {
            if(used[i]==0)
            {
                ll cur=last-arr[i];
                last=arr[i];
                mx=max(mx,cur);
            }
        }
        mx=max(mx,last-0);
        printf("Case %d: %lld\n",k,mx);
    }
    return 0;
}
