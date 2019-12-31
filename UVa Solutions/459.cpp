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
int exists[50],z;
vector <int> graph[1000];
void bfs(int src)
{
    z++;
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
    int a,b,c,d,src,i;
    string s;
    z=0;
    cin>>a;
    getchar();
    getline(cin,s);
    while(a--)
    {
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
                b=s[0]-65;
            if(s[1]>=65 && s[1]<=90)
                c=s[1]-65;
            else
                c=b;
            graph[b].push_back(c);
            graph[c].push_back(b);
            exists[b]=1;
          //  exists[c]=1;
        }
        //  cout<<"hi"<<endl;
        for(i=0; i<=27; i++)
        {
            if(visit[i]==0 && exists[i]==1)
                bfs(i);
        }
        cout<<z<<endl;
        for(i=0; i<50; i++)
            graph[i].clear();
        fill(visit,visit+30,0);
        fill(exists,exists+50,0);
        z=0;
        if(a>0)
        {
            cout<<endl;
        }
    }
    return 0;
}
