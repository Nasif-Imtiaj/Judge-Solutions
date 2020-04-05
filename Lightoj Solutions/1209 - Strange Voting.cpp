#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<int>graph[1000005];
bool visit[1000005];
int connection[1000005];
bool BPM(int node)
{
    int sz=graph[node].size();
    for(int i=0; i<sz; i++)
    {
        int child=graph[node][i];
        if(visit[child]==0)
        {
            visit[child]=1;
            if(connection[child]<0 || BPM(connection[child]))
            {
                connection[child]=node;
                return true;
            }
        }
    }
    return false;
}
int maxBPM(int n)
{
    memset(connection,-1,sizeof(connection));
    int res=0;
    for(int i=0; i<n; i++)
    {
        memset(visit,0,sizeof(visit));
        if(BPM(i))
            res++;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,m,l;
        cin>>n>>m>>l;
        vector<pair<string,string> >v1,v2;
        for(int i=0; i<l; i++)
        {
            string x,y,s;
            cin>>x>>y;
            if(x[0]=='M')
            {
                v1.push_back(make_pair(x,y));
            }
            else
            {
                v2.push_back(make_pair(x,y));
            }
        }
        for(int i=0; i<v1.size(); i++)
        {
            for(int j=0; j<v2.size(); j++)
            {
                if(v1[i].first==v2[j].second || v1[i].second==v2[j].first)
                {
                    graph[i].push_back(j);
                }
            }
        }
        int ans=maxBPM(v1.size());
        ans=(l-ans);
        printf("Case %d: %d\n",k,ans);
        for(int i=0; i<l; i++)
            graph[i].clear();
    }
    return 0;
}
