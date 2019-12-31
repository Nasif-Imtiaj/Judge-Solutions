#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int dist[10000], visit[10000],color[100000];
vector <int> graph[1000];
int flg=0;
void bfs(int src)
{
    visit[src] = 1;
    color[src]=1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0; i<graph[temp].size(); i++)
        {
            int node = graph[temp][i];

            dist[node]=dist[temp]+1;

            if(visit[node]==0)
            {
                q.push(node);
                visit[node]=1;
            }

            if(color[node]==0)
            {
                if(color[temp]==1)
                    color[node]=2;
                else
                    color[node]=1;
            }

            if(color[temp]==color[node])
                flg=1;
        }
    }
}
int main()
{
freopen("output.txt", "w", stdout);

    int a,b,c,d,i=0,start;

    while(cin>>d)
    {
        if(d==0)
            break;
        flg=0;
        fill(color,color+10000,0);
        fill(visit,visit+10000,0);
        fill(dist,dist+10000,0);
        cin>>a;
        while(a--)
        {
            cin>>b>>c;
            graph[b].push_back(c);
            graph[c].push_back(b);
            if(i==0)
                start=b;
            i++;
        }
        bfs(start);
        if(flg==1)
            co("NOT BICOLORABLE.")
            else
                co("BICOLORABLE.")

        for(i=0;i<1000;i++){
            graph[i].clear();
        }
            }
    return 0;
}
