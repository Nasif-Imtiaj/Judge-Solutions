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
vector<int>graph[27];
int dist[1000], visit[27];
int should_check[27];
int sub=0;
void bfs(int src)
{
    sub++;
    visit[src] = 1;
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
    freopen("output.txt", "w", stdout);
    int a,b,c,d,z=0,x,y,start,i;
    string s,m;
    cin>>a;
    getchar();
    getline(cin,m);
    while(a--)
    {
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
            if(z==0)
            {
                start=s[0]-65;
                should_check[start]=1;
                z++;
                continue;
            }
            x=s[0]-65;
            y=s[1]-65;
            should_check[x]=1;
            should_check[y]=1;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        for(i=0; i<27; i++)
        {
            if(should_check[i]==1 && visit[i]==0)
                bfs(i);
        }

        if(visit[start]==0 && should_check[start]==1)
            sub++;

        co(sub)
        if(a!=0)
        cout<<endl;
        sub=0;
        z=0;
        for(i=0; i<27; i++){
            graph[i].clear();
        visit[i]=0;
        should_check[i]=0;
        dist[i]=0;
        }
    }








    return 0;
}
