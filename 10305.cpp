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
vector<int>graph[1000];
stack<int>topo;
int visit[1000];
void dfs(int src)
{
    visit[src]=1;
    for(int i=0; i<graph[src].size(); i++)
    {
       int node=graph[src][i];
        if(visit[node]==0)
        dfs(node);
    }
    topo.push(src);
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,i;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        while(b--)
        {
            cin>>c>>d;
            graph[c].push_back(d);
        }
        for(i=1; i<=a; i++)
        {
            if(visit[i]==0)
                dfs(i);
        }
        while(!topo.empty())
        {
            cout<<topo.top();
            topo.pop();
            if(topo.size()!=0)
                cout<<" ";
        }
        cout<<endl;
        for(i=0; i<=a; i++)
        {
            visit[i]=0;
            graph[i].clear();
        }
    }
    return 0;
}

