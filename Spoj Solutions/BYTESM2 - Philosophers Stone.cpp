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
int r,c;
int dp[105][105];
int arr[105][105];
int find_mx(int x,int y)
{
    if(x>=r || y<0 || y>=c)
        return 0;
    if(dp[x][y])
        return dp[x][y];
    int mx=0;
    int temp=max(find_mx(x+1,y),max(find_mx(x+1,y-1),find_mx(x+1,y+1)))+arr[x][y];
    mx=max(mx,temp);
    return dp[x][y]=mx;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&r,&c);
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                scanf("%d",&arr[i][j]);
        int ans=0;
        for(int i=0; i<c; i++)
            ans=max(ans,find_mx(0,i));
        printf("%d\n",ans);
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            dp[i][j]=0;
    }

    return 0;
}
