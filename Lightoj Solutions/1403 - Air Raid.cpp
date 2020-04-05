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
vector<int>graph[10005];
bool visit[10005];
int connection[10005];
bool BPM(int node)
{
    int sz=graph[node].size();
    for(int i=0; i<sz; i++)
    {
        int child=graph[node][i];
        if(visit[child]==0)
        {
            visit[child]=1;
            if(connection[child]<0 || BPM(connection[child]))
            {
                connection[child]=node;
                return true;
            }
        }
    }
    return false;
}
int maxBPM(int n)
{
    for(int i=1; i<=n; i++)
        connection[i]=-1;
    int res=0;
    for(int i=1; i<=n; i++)
    {

        for(int i=1; i<=n; i++)
            visit[i]=0;
        if(BPM(i))
            res++;

    }
    return res;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        while(m--)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
        }

        printf("Case %d: %d\n",cs,n-maxBPM(n));
        for(int i=1; i<=n; i++)
            graph[i].clear();
    }
    return 0;
}


