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
int dp[25005];
int arr[200];
int knapsack(int n,int w)
{
    int i,j;
    for(i=0; i<=w; i++)
        dp[i]=0;
    for(i=1; i<=n; i++)
        for(j=w; j>0; j--)
            if(arr[i]<=j)
                dp[j]=max(dp[j],arr[i]+dp[j-arr[i]]);

    return dp[w];
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w,n;
        scanf("%d %d",&w,&n);
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        if(w==knapsack(n,w))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

