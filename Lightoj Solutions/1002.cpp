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
int child_of_src[10000];
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
            // cout<<childs_money<<endl;
            if(parent==src)
            {
                if(cost[child]==-1 || cost[child]>childs_money)
                {
                    cost[child]=childs_money;
                    q.push(make_pair(-1*childs_money,child));
                }
            }
            else if(cost[child]==-1)
            {
                cost[child]=max(cost[parent],childs_money);
                q.push(make_pair(-1*childs_money,child));
            }
            else if(cost[child]>max(cost[parent],childs_money)){
                cost[child]=max(cost[parent],childs_money);
                q.push(make_pair(-1*max(cost[parent],childs_money),child));
            }

        }
    }
}
int main()
{
    //freopen("output.txt", "w", stdout);
    int n,m,u,v,w,t,i,j,src;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        fill(cost,cost+501,-1);
        fill(child_of_src,child_of_src+501,0);
        scanf("%d %d",&n,&m);
        while(m--)
        {
            scanf("%d %d %d",&u,&v,&w);
            graph[u].push_back(make_pair(w,v));
            graph[v].push_back(make_pair(w,u));
        }
        scanf("%d",&src);
        dijkstra(src);
        cost[src]=0;
        printf("Case %d:\n",i);
        for(j=0; j<n; j++)
        {
            if(cost[j]==-1)
                printf("Impossible\n");
            else
                printf("%d\n",cost[j]);
        }
        for(j=0; j<=501; j++)
            graph[j].clear();

    }
    return 0;
}
