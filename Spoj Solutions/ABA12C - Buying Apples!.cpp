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
int arr[200];
int dp[1005][1005];
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,w;
        scanf("%d %d",&n,&w);
        for(int i=1; i<=w; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1; i<=w; i++)
            dp[0][i]=1000000;
        for(int i=1; i<=w; i++)
        {
            for(int j=1; j<=w; j++)
            {
                if(arr[i]==-1 || j<i)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=min(dp[i-1][j],arr[i]+dp[i][j-i]);
            }
        }
        if(dp[w][w]==1000000)
            printf("-1\n");
        else
            printf("%d\n",dp[w][w]);
    }

    return 0;
}
///N can be ignored
