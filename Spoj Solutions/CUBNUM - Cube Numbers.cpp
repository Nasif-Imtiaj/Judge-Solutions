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
int dp[50][100005];
int main()
{
//freopen("output.txt", "w", stdout);
    for(int i=1; i<=100000; i++)
        dp[1][i]=i;
    for(int i=2; i<=46; i++)
    {
        int cur=i*i*i;
        dp[i][0]=0;
        for(int j=1; j<=100000; j++)
        {
            if(j<cur)
                dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-cur]+1);
            }
        }
    }
    int n,cs=1;
    while(scanf("%d",&n)!=EOF)
    {
        printf("Case #%d: %d\n",cs++,dp[46][n]);
    }
    return 0;
}
