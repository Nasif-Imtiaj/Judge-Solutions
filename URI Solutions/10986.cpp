#include<bits/stdc++.h>
using namespace std;
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
    int a,b,c,d,n,s,t,m,i;
    cin>>d;
    for(int j=1; j<=d; j++)
    {
        fill(cost,cost+100000,-1);
        cin>>n>>m>>s>>t;
        for(i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            graph[a].push_back(make_pair(c,b));
            graph[b].push_back(make_pair(c,a));
        }
        dijkstra(s);
        printf("Case #%d: ",j);
        if(cost[t]==-1)
            cout<<"unreachable"<<endl;
        else
        cout<<cost[t]<<endl;

        for(i=0;i<100000;i++)
            graph[i].clear();
    }
    return 0;
}
