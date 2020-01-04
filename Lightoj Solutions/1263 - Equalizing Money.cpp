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
int visit[1002],carry,arr[1002],sum;
vector <int> graph[1002];
void bfs(int src)
{
    if(visit[src]==1)
        return;
    visit[src] = 1;
    carry+=arr[src-1]-sum;
    arr[src-1]=sum;
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
                carry+=arr[node-1]-sum;
                //cout<<"node is "<<node<<" "<<carry<<endl;
                arr[node-1]=sum;
                q.push(node);
            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        sum=0;
        scanf("%d %d",&n,&m);
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum/=n;
        int u,v;
        while(m--)
        {
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int ans=0;
        for(i=1; i<=n; i++)
        {
            carry=0;
            bfs(i);

            if(carry==0)
                ans++;
        }
        printf("Case %d: ",cs++);
        if(ans==n)
            printf("Yes\n");
        else
            printf("No\n");
        for(i=0; i<=n; i++)
        {
            graph[i].clear();
            visit[i]=0;
        }
    }





    return 0;
}

