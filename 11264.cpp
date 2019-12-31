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
ll arr[10000];
int bs(int l,int r,ll val)
{
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]<=val)
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        arr[n]=INT_MAX;
        ll val=0;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            int pos=bs(0,n,val+arr[i]);
            if(pos==i)
            {
                val+=arr[i];
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

