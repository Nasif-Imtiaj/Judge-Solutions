#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int dist[1000], visit[1000];
vector <int> graph[1000];
void bfs(int src)
{
    //visit[src] = 1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0; i<graph[temp].size(); i++)
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
int main()
{
//freopen("output.txt", "w", stdout);

    int n,i,j,k,a,b,c,src,vertex,edge,nodes,z=0;

    while(cin>>nodes)
    {
        if(nodes==0)
            break;
        while(cin>>vertex)
        {
            if(vertex==0)
                break;
            while(cin>>edge)
            {
                if(edge==0)
                    break;
                graph[vertex].push_back(edge);
            }
        }
        cin>>c;
        while(c--)
        {
            fill(visit,visit+200,0);
            z=0;
            cin>>src;
            bfs(src);
            for(i=1; i<=nodes; i++)
            {
                if(visit[i]==0)
                    z++;
            }
            cout<<z;
            for(i=1; i<=nodes; i++)
            {
                if(visit[i]==0)
                    cout<<" "<<i;
            }
            cout<<endl;
        }
        for(i=0;i<200;i++)
            graph[i].clear();
        fill(visit,visit+200,0);
    }

    return 0;
}
