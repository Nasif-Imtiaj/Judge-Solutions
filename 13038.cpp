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
vector<int>graph[100055];
int mx_dist,visit[100055],dist[100055];
int dfs(int src)
{
    if(dist[src]!=0)
        return dist[src];
    for(int i=0; i<graph[src].size(); i++)
    {
        dist[src]=max(dist[src],dfs(graph[src][i]));
    }
    dist[src]+=1;
    mx_dist=max(mx_dist,dist[src]);
    return dist[src];
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        while(m--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            graph[a].push_back(b);
        }
        int mark=1,temp;
        for(int i=1; i<=n; i++)
           temp=dfs(i);
        printf("Case %d: %d\n",cs++,mx_dist);
        for(int i=1; i<=n; i++)
        {
            graph[i].clear();
            dist[i]=0;
        }
        mx_dist=0;
    }
    return 0;
}
