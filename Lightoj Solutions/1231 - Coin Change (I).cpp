#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e8+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int coins[100],use[100],dp[52][1005],n;
int coin_change(int pos,int amount)
{
    if(pos==n)
    {
        if(!amount)
            return 1;
        else
            return 0;
    }
    if(dp[pos][amount]!=-1)
        return dp[pos][amount];
    int ans=0;
    for(int i=1; i<=use[pos]; i++)
    {
        if(amount-(coins[pos]*i)>=0)
            ans+=(coin_change(pos+1,amount-(coins[pos]*i)))%MOD;
        else
            break;
    }
    ans+=coin_change(pos+1,amount)%MOD;
    ans%=MOD;
    return dp[pos][amount]=ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        int amount;
        scanf("%d %d",&n,&amount);
        for(int i=0; i<n; i++)
            scanf("%d",&coins[i]);
        for(int i=0; i<n; i++)
            scanf("%d",&use[i]);
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n",cs,coin_change(0,amount));
    }

    return 0;
}
