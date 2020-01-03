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
long long phi[1500003];
void computeTotient(int n)
{

    for (int i=1; i<=n; i++)
        phi[i] = i;
    for (int j=2; j<=n; j++)
    {
        if (phi[j] == j)
        {
            phi[j] = j-1;
            for (int i = 2*j; i<=n; i += j)
            {
                phi[i] = (phi[i]/j) * (j-1);
            }
        }
    }
    // Print precomputed phi values
}
vector<pair<int,int>>store;
bool used[2000005];
int bs(int value)
{
    int l=0,r=store.size();
    int ans=INT_MAX;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(store[mid].first<value)
            l=mid+1;
        else
        {
            ans=min(store[mid].second,ans);
            r=mid-1;
        }
    }
    // co(ans)
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    computeTotient(1500002);
    for(int i=2; i<1500002; i++)
    {
        int a=phi[i];
        if(a<=1200000)
        {
            if(used[a]==0)
            {
                store.push_back(make_pair(a,i));
                used[a]=1;
            }
        }
    }
    sort(store.begin(),store.end());
    for(int i=206817; i>=0; i--)
    {
        store[i].second=min(store[i].second,store[i+1].second);
    }
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,a;
        cin>>n;
        ll sum=0;
        while(n--)
        {
            cin>>a;
            sum+= bs(a);
            //  co(minimum_value[pos])
        }
        printf("Case %d: %lld Xukha\n",cs++,sum);
    }
    return 0;
}
