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
const int base = 1337;
ll pw[300015];
ll HASH[300015];
char s[300];
int len;
void pre_power()
{
    pw[0] = 1;
    for(int i = 1; i < 300015; i++)
    {
        pw[i] = (pw[i - 1] * base) % MOD;
    }
}
void get_hashval()
{
    ll hash_val=0;
    for(int i = 0; i < len; i++)
    {
        hash_val=(hash_val*pw[i])+s[i];
        HASH[i+1]=hash_val;
    }
}
ll SubstringHash(int l, int r)
{
    return (HASH[r] - (HASH[l - 1] * pw[r - l + 1]) % MOD + MOD) % MOD;
}
int main()
{
//freopen("output.txt", "w", stdout);
    pre_power();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        ll res=0;
        map<ll,int>mp;
        while(n--)
        {
            scanf("%s",s);
           len=strlen(s);
            get_hashval();
            for(int i=1; i<=len; i++)
            {
                ll val=SubstringHash(1,i);
                mp[val]++;
                ll temp=mp[val]*i;
                res=max(res,temp);
            }
        }
        printf("%lld\n",res);
    }
    return 0;
}

