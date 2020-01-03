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
int arr[30][30],n;
ll dp[1<<20+2];
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                scanf("%d",&arr[i][j]);
        memset(dp,0,sizeof(dp));
        dp[(1<<n)-1] = 1;
        for(int i=(1<<n)-1; i>=0; i--)
        {
            int index=__builtin_popcount(i);
            for(int j=0; j<n; j++)
            {
                if(arr[index][j]==0 || (i & (1<<j)))
                    continue;
                else
                    dp[i] += dp[i | (1<<j)];
            }
        }
        printf("%lld\n",dp[0]);
    }
    return 0;
}
