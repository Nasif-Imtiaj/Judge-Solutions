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
int dp[30][30];
int Neighbor[30][30];
int house(int indx,int color_taken,int n)
{
    if(dp[indx][color_taken]!=0)
        return dp[indx][color_taken];
    if(indx==n)
        return 0;
    if(color_taken==0)
    {
        int l=house(indx+1,1,n)+Neighbor[indx][1];
        int r=house(indx+1,2,n)+Neighbor[indx][2];
        return dp[indx][color_taken]=min(l,r);
    }
    else if(color_taken==1)
    {
        int l=house(indx+1,0,n)+Neighbor[indx][0];
        int r=house(indx+1,2,n)+Neighbor[indx][2];
        return dp[indx][color_taken]=min(l,r);
    }
    else
    {
        int l=house(indx+1,0,n)+Neighbor[indx][0];
        int r=house(indx+1,1,n)+Neighbor[indx][1];
        return dp[indx][color_taken]=min(l,r);
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,c;
        memset(dp,0,sizeof(dp));
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d %d %d",&Neighbor[i][0],&Neighbor[i][1],&Neighbor[i][2]);
        }
        a=house(1,0,n)+Neighbor[0][0];
        b=house(1,1,n)+Neighbor[0][1];
        c=house(1,2,n)+Neighbor[0][2];
       a=min(a,b);
       a=min(a,c);
       printf("Case %d: %d\n",cs++,a);

    }



    return 0;
}
