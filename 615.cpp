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
int tree=0;
map<string,int>visit;
map<string,int>cant_be_root;
map<string,vector<string> >graph;
map<string,vector<string> >::iterator it;
void bfs(string src)
{
    // cout<<src<<endl;
    visit[src]=1;
    queue<string>q;
    q.push(src);
    while(!q.empty())
    {
        string item=q.front();
        q.pop();
        for(int i=0; i<graph[item].size(); i++)
        {
            string child=graph[item][i];
            if(visit[child]==0)
            {
                visit[child]=1;
                q.push(child);
            }
            else
            {
                tree=1;
                return;
            }
        }
    }
}
int main()
{
  //  freopen("output.txt", "w", stdout);
    int c,d,z=1,en=0,x=0;
    string a,b,src,hoho;
    hoho="hi";
    while(1)
    {
        while(cin>>a>>b)
        {
            if(a=="0" && b=="0")
                break;
            if(a[0]=='-' && b[0]=='-')
            {
                en=1;
                break;
            }
            graph[a].push_back(b);
            cant_be_root[b]=1;
            x=1;
        }
        if(en==1)
            break;
        for(it=graph.begin(); it!=graph.end(); ++it)
        {
            string check=it->first;
            if(cant_be_root[check]==0 && graph[check].size()>0)
            {
                src=check;
                break;
            }
        }
        bfs(src);
        for(it=graph.begin(); it!=graph.end(); ++it)
        {
            string check=it->first;
            if(visit[check]==0)
            {
                tree=1;
                break;
            }
        }
        if(hoho==src)
            tree=1;
        printf("Case %d",z);
        if(tree==0 || x==0)
            cout<<" is a tree."<<endl;
        else
            cout<<" is not a tree."<<endl;
        tree=0;
        z++;
        graph.clear();
        visit.clear();
        cant_be_root.clear();
        src=hoho;
        x=0;
    }
    return 0;
}
