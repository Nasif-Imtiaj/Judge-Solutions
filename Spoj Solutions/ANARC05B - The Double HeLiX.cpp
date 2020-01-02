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
#define FastRead    ios_base::sync_with_stdio(false);cin.tie(NULL);
int dp[10015][3],arr1[10005],arr2[10005],n,m;
int find_intersection_point(int n,int val,int routes)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(routes==1)
        {
            if(arr1[mid]==val)
            {
                return mid;
            }
            else if(arr1[mid]>val)
                r=mid-1;
            else
                l=mid+1;
        }
        else
        {
            if(arr2[mid]==val)
            {
                return mid;
            }
            else if(arr2[mid]>val)
                r=mid-1;
            else
                l=mid+1;
        }
    }
    return INT_MAX;
}
int sum(int pos,int cur_track)
{
    if((cur_track==1 && pos==n) ||  (cur_track==2 && pos==m))
        return 0;
    if(dp[pos][cur_track])
        return dp[pos][cur_track];
    int ans;
    if(cur_track==1)
    {
        ans=sum(pos+1,cur_track)+arr1[pos];
        int point=find_intersection_point(m,arr1[pos],2);
        if(point<INT_MAX)
            ans=max(ans,sum(point+1,2)+arr1[pos]);
    }
    else
    {
        ans=sum(pos+1,cur_track)+arr2[pos];
        int point=find_intersection_point(n,arr2[pos],1);
        if(point<INT_MAX)
            ans=max(ans,sum(point+1,1)+arr2[pos]);
    }
    return dp[pos][cur_track]=ans;
}
void init(int n,int m)
{
    int x=max(n,m);
    for(int i=0; i<=x; i++)
    {
        dp[i][1]=0;
        dp[i][2]=0;
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(int i=0; i<n; i++)
            scanf("%d",&arr1[i]);
        scanf("%d",&m);
        for(int i=0; i<m; i++)
            scanf("%d",&arr2[i]);
        int ans=sum(0,1);
        ans=max(ans,sum(0,2));
        printf("%d\n",ans);
        init(n,m);
    }

    return 0;
}
