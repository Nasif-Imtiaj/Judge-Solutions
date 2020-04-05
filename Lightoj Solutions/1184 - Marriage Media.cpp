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
    for(int cs=1; cs<=t; cs++)
    {
        vector<pair<int,pair<int,int> > >v1,v2;
        int n,m;
        cin>>n>>m;
        while(n--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            v1.push_back(make_pair(a,make_pair(b,c)));
        }
        while(m--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            v2.push_back(make_pair(a,make_pair(b,c)));
        }
        for(int i=0; i<v1.size(); i++)
        {
            for(int j=0; j<v2.size(); j++)
            {
                int height=v1[i].first-v2[j].first;
                if(height<0)
                    height*=-1;
                int age=v1[i].second.first-v2[j].second.first;
                if(age<0)
                    age*=-1;
                if(height<=12)
                    if(age<=5)
                        if(v1[i].second.second==v2[j].second.second)
                            graph[i].push_back(j);
            }
        }
        printf("Case %d: %d\n",cs,maxBPM(v1.size()));
        for(int i=0; i<v1.size(); i++)
            graph[i].clear();
    }
    return 0;
}
