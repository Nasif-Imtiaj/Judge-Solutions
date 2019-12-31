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
vector<int>graph[1000];
stack<int>topo;
stack<int>topo2;
vector<string>keep;
int visit[1000];
void dfs(int src)
{

    visit[src]=1;
    for(int i=0; i<graph[src].size(); i++)
    {
        int node=graph[src][i];
        if(visit[node]==0)
            dfs(node);
    }
    topo.push(src);
}
void dfs2(int src)
{
    visit[src]=1;
    for(int i=0; i<graph[src].size(); i++)
    {
        int node=graph[src][i];
        if(visit[node]==0)
            dfs2(node);
    }
    topo2.push(src);
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,i,z=1;
    map<string,int>mp;
    string s,s1;
    while(cin>>d)
    {
        getchar();
        for(i=1; i<=d; i++)
        {
            cin>>s;
            mp[s]=i;
            keep.push_back(s);
        }
        cin>>a;
        getchar();
        while(a--)
        {
            cin>>s>>s1;
            b=mp[s];
            c=mp[s1];
            graph[b].push_back(c);
        }
        for(i=1; i<=d; i++)
        {
            if(visit[i]==0)
                dfs(i);
        }
        printf("Case #%d: ",z);
        cout<<"Dilbert should drink beverages in this order:";
        fill(visit,visit+d+1,0);
        while(!topo.empty())
        {
            int child=topo.top();
            //cout<<child<<endl;
            if(visit[child]==0)
            {
                dfs2(child);
            }
            topo.pop();
        }
       // cout<<topo2.size()<<endl;
        while(!topo2.empty()){
            cout<<" "<<keep[topo2.top()-1];
            topo2.pop();
        }
        cout<<"."<<endl<<endl;
        mp.clear();
        for(i=0; i<=d; i++)
        {
            graph[i].clear();
            visit[i]=0;
        }
        keep.clear();
        z++;
    }
    return 0;
}

