#include<bits/stdc++.h>
using namespace std;
#define bug cout<<"bug"<<endl;
vector<int>graph[1005];
bool visit[1005];
int connection[1005];
bool BPM(int node)
{
    int sz=graph[node].size();
    for(int i=0; i<sz; i++)
    {
        int child=graph[node][i];
        if(!visit[child])
        {
            visit[child]=1;
            if(connection[child]==-1 || BPM(connection[child]))
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
        vector<int>v1,v2;
        int n,m;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(v2[j]%v1[i]==0)
                {
                    graph[i].push_back(j);
                }
            }
        }
        printf("Case %d: %d\n",k,maxBPM(n));
        for(int i=0; i<n; i++)
        {
            graph[i].clear();
        }
    }
    return 0;
}
