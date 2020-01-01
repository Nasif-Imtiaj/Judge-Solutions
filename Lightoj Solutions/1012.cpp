#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)

string land[600];
int visit[505][505];
int total=0;
int row[]= {1,0,-1,0};
int colm[]= {0,1,0,-1};
int a,b;
void bfs(int x,int y)
{

    queue<int>QX;
    queue<int>QY;

    visit[x][y]=1;
    total++;

    QX.push(x);
    QY.push(y);

    while(!QX.empty())
    {
        int u,v,i,m,n;
        m=QX.front();
        n=QY.front();
        QX.pop();
        QY.pop();
        for(i=0; i<4; i++)
        {
            u=row[i]+m;
            v=colm[i]+n;
            if(u>=0 && u<b && v>=0 && v<a && visit[u][v]==0 && land[u][v]=='.')
            {
                visit[u][v]=1;
                QX.push(u);
                QY.push(v);
                total++;
            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int c,i,j,x,y,k;
    cin>>c;
    for(k=1; k<=c; k++)
    {
        cin>>a>>b;
        getchar();
        for(i=0; i<b; i++)
        {
            cin>>land[i];
            for(j=0; j<a; j++)
            {
                if(land[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        bfs(x,y);
        for(i=0; i<b; i++)
        {
            for(j=0; j<a; j++)
                visit[i][j]=0;
        }
        printf("Case %d: %d\n",k,total);
        total=0;
    }
    return 0;
}
