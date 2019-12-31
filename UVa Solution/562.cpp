#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int dp[25005];
int x[200];
int knapsack(int n,int w)
{
    int i,j;
    for(i=0;i<=w;i++) dp[i]=0;
    for(i=1; i<=n; i++)
        for(j=w; j>0; j--)
            if(x[i]<=j)
                dp[j]=max(dp[j],x[i]+dp[j-x[i]]);

    return dp[w];
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int t,a,b,c,i,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(i=1; i<=a; i++)
        {
            cin>>x[i];
            sum+=x[i];
        }
        cout<<sum-2*knapsack(a,sum/2)<<endl;
        sum=0;
    }
    return 0;
}
