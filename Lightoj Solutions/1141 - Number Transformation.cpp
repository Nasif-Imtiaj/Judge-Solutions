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
int dist[2000];
vector<int>graph[2000];
int visit[2000];
void bfs(int src,int target)
{
    visit[src] = 1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        if(target==temp) return;
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
int main()
{
//freopen("output.txt", "w", stdout);

    for(int i=4; i<=1000; i++)
    {
        int temp=i;
        if(temp%2==0)
        {
            graph[i].push_back(i+2);
        }
        while(temp%2==0)
            temp/=2;
        for(int j=3; j<=temp; j+=2)
        {
            if(i==j)
                continue;
            if(temp%j==0)
                graph[i].push_back(i+j);
            while(temp%j==0)
                temp/=j;
        }
    }
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("Case %d: ",cs++);
        bfs(x,y);
        if(x==y || dist[y]!=0)
            printf("%d\n",dist[y]);
        else
            printf("-1\n");
    fill(visit,visit+1500,0);
    fill(dist,dist+1500,0);
    }








    return 0;
}
