#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int visit[10000],dist[10000];
vector<int>graph[10000];
void dfs(int src)
{

    visit[src] = 1;

    for(int i=0; i<graph[src].size(); i++)
    {
        int node = graph[src][i];
        if(visit[src]==1)
        {
            cout<<"cycle"<<endl;
            return;
        }
        if(visit[node] == 0)
        {
            dist[node] = dist[src]+1;
            dfs(node);
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c;

    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        graph[b].push_back(c);
        graph[c].push_back(b);
    }
    dfs(b);













    return 0;
}
