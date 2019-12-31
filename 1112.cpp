#include<bits/stdc++.h>
using namespace std;
int maze[1000];
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
    fill(cost,cost+500,-1);
    int vertex,src,ext,a,b,c,d,z=0,i;
    cin>>vertex>>ext>>src>>d;
    while(d--)
    {
        cin>>a>>b>>c;
        graph[a].push_back(make_pair(c,b));
    }

    dijkstra(src);
    for(i=1; i<=vertex; i++)
    {
        cout<<cost[i]<<endl;
        if(cost[i]<=ext && cost[i]!=-1)
            z++;
    }
    cout<<z<<endl;










    return 0;
}
