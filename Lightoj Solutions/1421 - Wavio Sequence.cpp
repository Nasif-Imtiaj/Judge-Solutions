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
#define INF 1<<30
int arr[MAX],lis[MAX],store_lis[MAX],lds[MAX],store_lds[MAX];
void LIS(int n)
{
    for(int i=0; i<n; i++)
        lis[i]=INF;
    int pos, cnt = 0 ;
    lis[0] = -INF ;
    lis[n] = INF ;
    for (int i = 0 ; i < n ; i++ )
    {
        pos = lower_bound( lis, lis+n+1, arr[i] ) - lis;
        lis[pos] = arr[i] ;
        cnt = max ( cnt, pos );
        store_lis[i] = cnt ;
    }
}
void LDS(int n)
{
    for(int i=0; i<n; i++)
        lds[i]=INF;
    int pos, cnt= 0 ;
    lds[0] = -INF ;
    lds[n] = INF;
    for (int i = n-1 ; i >=0 ; i-- )
    {
        pos = lower_bound( lds, lds+n+1, arr[i] ) - lds;
        lds[pos] = arr[i] ;
        cnt = max ( cnt, pos );
        store_lds[i] = cnt ;
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        LIS(n);
        LDS(n);
        int ans=0;
        for(int i=0; i<n; i++)
            ans=max(ans,min(store_lds[i],store_lis[i]));
        printf("Case %d: %d\n",cs,ans*2-1);
    }
    return 0;
}

