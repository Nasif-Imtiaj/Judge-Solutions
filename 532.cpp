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
int result[100][100];
int visit[50][50];
int dis[50][50];
string grid[100];
int row[]= {1,0,-1,0};
int colm[]= {0,1,0,-1}; //4 Direction
int R,C;
void bfs(int start_x,int start_y)
{
    queue<int>Qx;
    queue<int>Qy;

    visit[start_x][start_y] = 1;
    dis[start_x][start_y]   = 0;

    Qx.push(start_x);
    Qy.push(start_y);

    while(!Qx.empty())
    {
        int x = Qx.front();
        int y = Qy.front();

        Qx.pop();
        Qy.pop();

        for(int i=0; i<4; i++) // for four direction move
        {
            int u = x+row[i];
            int v = y+colm[i];

            if(0<=u && u<R && 0<=v && v<C)
            {
                if(visit[u][v]==0)
                {
                    if(grid[u][v]=='.')
                    {
                        visit[u][v]=1;
                        dis[u][v]+= dis[x][y]+1;
                        Qx.push(u);
                        Qy.push(v);
                    }
                    else if(grid[u][v]!='E' && grid[u][v]!='.')
                    {
                        dis[u][v]=-1;
                    }
                }
            }
        }
    }
    return ;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int L,n,i,j,k,s1,s2,e1,e2,found_s=0;
    string s;
    cin>>L>>R>>C;
    while(L--)
    {
        for(i=0;i<50;i++){
            for(j=0;j<50;j++){
                visit[i][j]=0;
            }
        }
        for(i=0; i<R; i++)
        {
            cin>>grid[i];
            for(j=0; j<C; j++)
            {
                if(grid[i][j]=='S')
                {
                    s1=i;
                    s2=j;
                    found_s=1;
                }
                if(grid[i][j]=='E')
                {
                    e1=i;
                    e2=j;
                }
            }
        }
        if(found_s==1){
            bfs(s1,s2);
            found_s=0;
        }
    }
  cout<<dis[e1][e2]<<endl;












    return 0;
}
