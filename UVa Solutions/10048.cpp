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
 int graph[107][107];
void warshal()
{
    int i,j,k;
    for(k=1; k<=100; k++)
        for(i=1; i<=100; i++)
            for(j=1; j<=100; j++)
            {
                graph[i][j]=min(graph[i][j],max(graph[i][k],graph[k][j]));
            }
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i,j,k,cs=1;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
            break;
        for(i=1; i<=103; i++)
            for(j=1; j<=103; j++)
                    graph[i][j]=100000;
                if(i==j)
                else
                    graph[i][j]=100000;
        int x,y,z;
        while(b--)
        {
            scanf("%d %d %d",&x,&y,&z);
            graph[x][y]=min(z,graph[x][y]);
           // graph[y][x]=min(z,graph[y][x]);
        }
        warshal();
        if(cs!=1)
            printf("\n");
        printf("Case #%d\n",cs++);
        while(c--)
        {
            scanf("%d %d",&x,&y);
            if(graph[x][y]==100000)
                printf("no path\n");
            else
                printf("%d\n",graph[x][y]);
        }
    }
    return 0;
}
