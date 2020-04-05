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
int arr[1006],dp1[1005],dp2[1005],n;
int recur1(int pos,int used[])
{
    if(pos>=n-1)
        return 0;
    if(dp1[pos])
        return dp1[pos];
    int l=pos-1,r=pos+1,x=0,y=0,z=0;
    if(l<0)
        l=n-2;
    if(r==n-1)
        r=0;
    y=recur1(pos+1,used);
    if(used[l]==0 && used[r]==0)
    {
        used[pos]=1;
        x=arr[pos]+recur1(pos+2,used);
        used[pos]=0;
    }
    return dp1[pos]=max(x,y);
}
int recur2(int pos,int used[])
{
    if(pos>=n)
        return 0;
    if(dp2[pos])
        return dp2[pos];
    int l=pos-1,r=pos+1,x=0,y=0,z=0;
    if(l<1)
        l=n-1;
    if(r==n)
        r=1;
    y=recur2(pos+1,used);
    if(used[l]==0 && used[r]==0)
    {
        used[pos]=1;
        x=arr[pos]+recur2(pos+2,used);
        used[pos]=0;
    }
    return dp2[pos]=max(x,y);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        int used[n+5];
        memset(used, 0, sizeof(used));
        memset(dp1, 0, sizeof(dp1));
        memset(dp2, 0, sizeof(dp2));
        int ans=max(recur1(0,used),recur2(1,used));
        printf("Case %d: %d\n",k,ans);
    }

    return 0;
}

