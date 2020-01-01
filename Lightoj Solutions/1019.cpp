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
int cost[100000];
vector< pair <int,int> >graph[100000];
void dijkstra(int src)
{
    priority_queue< pair<int,int> >q;
    q.push(make_pair(0,src));
    cost[src]=0;
    while(!q.empty())
    {
        int parents_money=q.top().first*-1;
        int parent=q.top().second;
        q.pop();
        for(int i=0; i<graph[parent].size(); i++)
        {
            int childs_money=graph[parent][i].first;
            int child=graph[parent][i].second;
            if(cost[child]==-1 || cost[child]>childs_money+cost[parent])
            {
                cost[child]=childs_money+cost[parent];
                q.push(make_pair(-1*cost[child],child));
            }
        }
    }
}
int main()
{
    //freopen("output.txt", "w", stdout);
    int junctions,roads,i,j,casee,a,b,c;
    cin>>casee;
    for(i=1; i<=casee; i++)
    {
        cin>>junctions>>roads;
           fill(cost,cost+10000,-1);
        while(roads--)
        {
            cin>>a>>b>>c;
            graph[a].push_back(make_pair(c,b));
            graph[b].push_back(make_pair(c,a));
        }
        dijkstra(1);
        printf("Case %d: ",i);
        if(cost[junctions]==-1)
            cout<<"Impossible"<<endl;
        else
            cout<<cost[junctions]<<endl;
        for(j=0; j<100000; j++)
            graph[j].clear();
    }
    return 0;
}
