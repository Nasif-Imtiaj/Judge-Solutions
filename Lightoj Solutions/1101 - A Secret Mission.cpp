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
int Sparse_Table[60000][50];
int Sparse_cost[60000][50];
int father[60000];
int depth[60000];
int nodes,edges;
vector<pair<int,int> >graph[60000];
pair<int,pair<int,int> >mst[100005];
int parent[60000];
int root(int child)
{
    while(parent[child]!=child)
    {
        parent[child]=parent[parent[child]];
        child=parent[child];
    }
    return child;
}
void node_union(int x,int y)
{
    int a=root(x);
    int b=root(y);
    parent[a]=parent[b];
}
void kruskal()
{
    for(int i=0; i<=nodes; i++)
        parent[i]=i;
    int x,y,cost,min_cost=0,i;
    for(i=0; i<edges; i++)
    {
        x=mst[i].second.first;
        y=mst[i].second.second;
        cost=mst[i].first;

        if(root(x)!=root(y))
        {
            min_cost+=cost;
            node_union(x,y);
            graph[x].push_back(make_pair(y,cost));
            graph[y].push_back(make_pair(x,cost));
        }
    }
}
void dfs(int src,int par,int height)
{
    father[src]=par;
    depth[src]=height;
    for(int i=0; i<graph[src].size(); i++)
    {
        int child=graph[src][i].first;
        int childs_cost=graph[src][i].second;
        if(child==par)
            continue;
        Sparse_cost[child][0]=childs_cost;
        dfs(child,src,height+1);
    }
}
void initialize_LCA()
{
    memset(Sparse_Table,-1,sizeof(Sparse_Table));
    memset(Sparse_cost,-1,sizeof(Sparse_cost));
    dfs(1,1,0);
    int i,j;
    for(i=1; i<=nodes; i++)
    {
        Sparse_Table[i][0]=father[i];
    }
    for (j = 1; 1 << j < nodes; j++)
    {
        for (i = 1; i <=nodes; i++)
        {
            if (Sparse_Table[i][j - 1] != -1)
            {
                Sparse_cost[i][j] = max(Sparse_cost[i][j-1],Sparse_cost[Sparse_Table[i][j - 1]][j-1]);
                Sparse_Table[i][j] = Sparse_Table[Sparse_Table[i][j - 1]][j - 1];
            }
        }
    }
}
int query_for_lca(int l,int r)
{
    if(depth[l]<depth[r])
        swap(l,r);

    int k=log2(depth[l]);
    ll ans=0;
    for(int i=k; i>=0; i--)
        if (depth[l] - (1 << i) >= depth[r])
        {
            l=Sparse_Table[l][i];
        }
    if(l==r)
        return l;
    for(int i=k; i>=0; i--)
        if (Sparse_Table[l][i]!=-1 && Sparse_Table[l][i]!=Sparse_Table[r][i])
        {
            l=Sparse_Table[l][i];
            r=Sparse_Table[r][i];
        }
    return father[l];
}
int query_for_max(int l,int r)
{
    if(l==r)
        return 0;
    if(depth[l]<depth[r])
        swap(l,r);
    int ans=0;
    int k=log2(depth[l]);
    for(int i=k; i>=0; i--)
        if (depth[l] - (1 << i) >= depth[r])
        {
            ans=max(Sparse_cost[l][i],ans);
            l=Sparse_Table[l][i];
        }
    for(int i=k; i>=0; i--)
        if (Sparse_Table[l][i]!=-1 && Sparse_Table[l][i]!=Sparse_Table[r][i])
        {

            ans=max(Sparse_cost[r][i],ans);
            ans=max(Sparse_cost[l][i],ans);
            l=Sparse_Table[l][i];
            r=Sparse_Table[r][i];
        }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d",&nodes,&edges);
        for(int i=0; i<edges; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            mst[i]=make_pair(c,make_pair(a,b));
        }
        sort(mst,mst+edges);
        kruskal();
        initialize_LCA();
        int q;
        scanf("%d",&q);
        printf("Case %d:\n",cs++);
        while(q--)
        {
            scanf("%d %d",&a,&b);
            int lca=query_for_lca(a,b);
            int ans=max(query_for_max(a,lca),query_for_max(lca,b));
            printf("%d\n",ans);
        }
        for(int i=0;i<=nodes;i++)
            graph[i].clear();
    }
    return 0;
}


