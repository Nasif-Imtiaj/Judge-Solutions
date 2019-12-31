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
#include<bits/stdc++.h>
using namespace std;
int dist[105],dist2[105], visit[105],st,en;
vector <int> graph[105];
void bfs(int src)
{
    visit[src] = 1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0;i<graph[temp].size();i++)
        {
            int node = graph[temp][i];
            if(visit[node] == 0)
            {
                visit[node]=1;
                dist[node]=dist[temp]+1;
                q.push(node);
            }
        }
    }
}
void bfs2(int src)
{
    visit[src] = 1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0;i<graph[temp].size();i++)
        {
            int node = graph[temp][i];
            if(visit[node] == 0)
            {
                visit[node]=1;
                dist2[node]=dist2[temp]+1;
                q.push(node);
            }
        }
    }
}
int main()
{
// freopen("output.txt", "w", stdout);

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int nodes,edges,u,v;
        cin>>nodes>>edges;
        while(edges--)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cin>>st>>en;
        bfs(st);
        fill(visit,visit+100,0);
        bfs2(en);
        int ans=0;
        for(int i=0; i<nodes; i++)
        {
              ans=max(ans,dist[i]+dist2[i]);
        }
        printf("Case %d: ",cs++);
        cout<<ans<<endl;
        for(int i=0; i<nodes; i++)
        {
            dist[i]=0;
            dist2[i]=0;
            visit[i]=0;
            graph[i].clear();
        }
    }






    return 0;
}
