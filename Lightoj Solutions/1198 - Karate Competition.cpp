#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int dp[55][55];
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        int myteam[55],enemyteam[55];
        for(int i=1; i<=n; i++)
            cin>>myteam[i];
        for(int i=1; i<=n; i++)
            cin>>enemyteam[i];
        sort(myteam+1,myteam+n+1);
        sort(enemyteam+1,enemyteam+n+1);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(myteam[i]>enemyteam[j])
                {
                    dp[i][j]=max(dp[i-1][j-1]+2,max(dp[i-1][j],dp[i][j-1]));
                }
                else if(myteam[i]==enemyteam[j])
                    dp[i][j]=max(dp[i-1][j-1]+1,max(dp[i-1][j],dp[i][j-1]));
                else
                    dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
            }
        }
        printf("Case %d: %d\n",cs++,dp[n][n]);
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
                dp[i][j]=0;
        }
    }
    return 0;
}
