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
vector<int>letters;
int visit[1000],len,nodeg[200];
void dfs(int src,string s)
{
     cout<<s<<endl;
    visit[src]=1;
    for(int i=0; i<graph[src].size(); i++)
    {
        int node=graph[src][i];
        if(visit[node]==0)
        {
            s+=node;
            dfs(node,s);
            int len2=s.length();
            s.erase(s.begin()+len2-1);
        }
    }
    visit[src]=0;
    if(s.length()==len)
        cout<<s<<endl;
}

int main()
{
//freopen("output.txt", "w", stdout);


    int a,b,c,i,j,z;
    string s,s1,temp;
    getline(cin,s);
    getline(cin,s1);
    for(i=0; i<s.length(); i+=2)
    {
        letters.push_back(s[i]);
    }
    for(i=0; i<s1.length(); i+=4)
    {
        a=s1[i];
        b=s1[i+2];
        graph[b].push_back(a);
        nodeg[a]=1;
        nodeg[b]=1;
    }
    len=letters.size();
    for(i=0; i<len; i++)
    {
        a=letters[i];
        if(nodeg[a]==0)
        {
            temp=a;
            dfs(a,temp);
        }
    }




    return 0;
}
