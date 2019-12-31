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
int dist[100000], visit[100000];
vector <int> graph[26000];
ll high=0,day=0,HD=0,take=0;
void bfs(int src)
{
    visit[src] = 1;
    queue <int> q;
    queue <int> Q2;
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
                Q2.push(node);
            }
        }
        if(q.empty())
        {
            take=Q2.size();
            while(!Q2.empty())
            {
                q.push(Q2.front());
                Q2.pop();
            }
            day++;
            if(take>high)
            {
                high=take;
                HD=day;
            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i,j,n,k;

    cin>>a;

    for(i=0; i<a; i++)
    {
        cin>>b;
        for(j=0; j<b; j++)
        {
            cin>>c;
            graph[i].push_back(c);
        }
    }
    cin>>n;
    while(n--)
    {
        fill(visit,visit+100000,0);
        fill(dist,dist+100000,0);
        high=0,day=0,HD=0,take=0;
        cin>>k;
        bfs(k);
        if(high==0)
            co("0")
            else
            {
                cout<<high<<" "<<HD<<endl;;
            }
    }
    return 0;
}
