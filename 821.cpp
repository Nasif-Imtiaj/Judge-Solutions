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
long long int graph[107][107];
void warshal()
{
    int i,j,k,a,b,c;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        graph[a][b]=1;
    }
    for(k=1; k<=100; k++)
        for(i=1; i<=100; i++)
            for(j=1; j<=100; j++)
            {
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
    int sum=0,cnt=0;
    for(i=1; i<=100; i++)
    {
        for(j=1; j<=100; j++)
        {
            // cout<<graph[i][j]<<" ";
            if(graph[i][j]!=INT_MAX && i!=j)
            {
                sum+=graph[i][j];
                cnt++;
            }
        }
        // cout<<endl;
    }
    double ans=(double)sum/(double)cnt;
    // cout<<sum<<" "<<cnt<<endl;
    cout<<setprecision(3)<<fixed<<ans<<" clicks"<<endl;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,i,j,k,cs=1;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        for(i=1; i<=103; i++)
            for(j=1; j<=103; j++)
                if(i==j)
                    graph[i][j]=0;
                else
                    graph[i][j]=INT_MAX;
        graph[a][b]=1;

        printf("Case %d: average length between pages = ",cs++);
        warshal();
    }
    return 0;
}
