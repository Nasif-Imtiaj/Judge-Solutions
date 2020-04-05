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
#define bug2(var) cout<<var<<" "<<#var<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAXN = 5000;
int start, target, n, nxt[MAXN+5], inf = 1.5e9, dist[MAXN+5];
struct edge
{
    int v, cap, opposite, flow;
};
vector<edge>graph[MAXN+5];
void add(int u, int v, int cap)
{
    graph[u].push_back({v,cap,graph[v].size(),0});
    graph[v].push_back({u,cap,graph[u].size()-1,0});
}
bool bfs()
{
    memset(dist,-1,sizeof(dist));
    queue<int>q;
    dist[start] = 0;
    q.push(start);
    while(!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int i = 0; i<graph[parent].size(); i++)
        {
            if(graph[parent][i].cap > graph[parent][i].flow)
            {
                int child = graph[parent][i].v;
                if(dist[child] == -1)
                {
                    dist[child] = dist[parent] +1;
                    q.push(child);
                }
            }
        }
    }
    return dist[target] != -1;
}
int dfs(int src, int sentFlow)
{
    if(src == target)
        return sentFlow;
    for(; nxt[src]<graph[src].size(); nxt[src]++)
    {
        int v = graph[src][nxt[src]].v;
        int cap = graph[src][nxt[src]].cap;
        int flow = graph[src][nxt[src]].flow;
        int opposite = graph[src][nxt[src]].opposite;
        if(dist[v] == dist[src]+1 && cap > flow)
        {
            int tmp = dfs(v,min(sentFlow,cap-flow));
            if(tmp)
            {
                graph[src][nxt[src]].flow += tmp;
                graph[v][opposite].flow -= tmp;
                return tmp;
            }
        }
    }
    return 0;
}
ll dinitz()
{
    ll totalFlow = 0;
    while(bfs())
    {
        memset(nxt,0,sizeof(nxt));
        int sentFlow;
        while(sentFlow = dfs(start,inf))
            totalFlow += sentFlow;
    }
    return totalFlow;
}

int main()
{
//freopen("output.txt", "w", stdout);
    int t,e;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        scanf("%d",&n);
        scanf("%d %d %d",&start,&target,&e);

        for(int i=0; i<e; i++)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            add(a,b,c);
        }
        printf("Case %d: %lld\n",cs,dinitz());
        for(int i=1; i<=n; i++)
            graph[i].clear();
    }
    return 0;
}
