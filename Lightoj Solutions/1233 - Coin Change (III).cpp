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
int coins[115],coins_cnt[115],dp[100050],used[100050];
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,amount;
        scanf("%d %d",&n,&amount);
        for(int i=1; i<=n; i++)
            scanf("%d",&coins[i]);
        for(int i=1; i<=n; i++)
            scanf("%d",&coins_cnt[i]);
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        used[0]=0;
        for(int i=1; i<=n; i++)
        {
            int cur=coins[i];
            for(int j=cur; j<=amount; j++)
            {
                if(!dp[j] && dp[j-cur] && used[j-cur]+1<=coins_cnt[i])
                {
                    dp[j]=1;
                    used[j]=used[j-cur]+1;
                }
            }
            for(int j=0;j<=amount;j++)
                used[j]=0;
        }
        int ans=0;
        for(int i=1; i<=amount; i++)
            if(dp[i])
                ans++;
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
