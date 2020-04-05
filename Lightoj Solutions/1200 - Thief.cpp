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
int dp[10005][101],ans,n,arr[2][105],remain_weight;
int recur(int pos,int cur_weight)
{
    if(pos==n)
        return 0;
    if(dp[cur_weight][pos]!=-1)
        return dp[cur_weight][pos];
    int l=0,r=0;
    if(arr[1][pos]+cur_weight<=remain_weight)
    {
        l=arr[0][pos]+recur(pos+1,arr[1][pos]+cur_weight);
        l=max(l,arr[0][pos]+recur(pos,arr[1][pos]+cur_weight));
    }
    r=recur(pos+1,cur_weight);
    return dp[cur_weight][pos]=max(l,r);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        int w;
        scanf("%d %d",&n,&w);
        for(int i=0; i<n; i++)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            arr[0][i]=a;
            arr[1][i]=c;
            w-=b*c;
        }
        if(w<0)
            printf("Case %d: Impossible\n",k);
        else
        {
            remain_weight=w;
            memset(dp, -1, sizeof(dp));
            printf("Case %d: %d\n",k,recur(0,0));
        }
    }
    return 0;
}

