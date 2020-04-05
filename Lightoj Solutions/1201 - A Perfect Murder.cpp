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

vector<int>graph[1015],color_graph[1015];
bool visit[1015];
int connection[1015];
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
    memset(connection,-1,sizeof(connection));
    int res=0;
    for(int i=0; i<n; i++)
    {

        memset(visit,0,sizeof(visit));
        if(BPM(i))
            res++;

    }
    return res;
}
int visit_dfs[100005];
int color[100005];
int one,two;
void dfs(int src)
{
    visit_dfs[src]=1;
    for(int i=0; i<color_graph[src].size(); i++)
    {
        int child=color_graph[src][i];
        if(visit_dfs[child]==0)
        {
            if(color[src]==1)
            {
                color[child]=2;
                two++;
            }
            else
            {
                color[child]=1;
                one++;
            }
            dfs(child);
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            color_graph[a].push_back(b);
            color_graph[b].push_back(a);
        }
        for(int i=1; i<=n; i++)
        {
            if(color[i]==0)
            {
                color[i]=1;
                dfs(i);
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(color[i]==1)
            {
                int sz=color_graph[i].size();
                if(sz)
                {
                    for(int j=0; j<sz; j++){
                        graph[i].push_back(color_graph[i][j]);
                    }
                }
            }
        }
        int ans=maxBPM(n+2);
        printf("Case %d: %d\n",k,n-ans);
        for(int i=0; i<=n; i++)
        {
            color[i]=0;
            visit_dfs[i]=0;
            color_graph[i].clear();
            graph[i].clear();
        }
    }
    return 0;
}
