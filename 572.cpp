#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)

string oil[200];
int visit[100][100];
int R,C;
int row[]= {0,0,1,-1,1,1,-1,-1};
int colm[]= {1,-1,0,0,1,-1,-1,1}; //4 Direction
int bfs(int start_x,int start_y)
{
    queue<int>Qx;
    queue<int>Qy;
    visit[start_x][start_y] = 1;
    Qx.push(start_x);
    Qy.push(start_y);

    while(!Qx.empty())
    {
        int x = Qx.front();
        int y = Qy.front();

        Qx.pop();
        Qy.pop();

        for(int i=0; i<8; i++) // for four direction move
        {
            int u = x+row[i];
            int v = y+colm[i];
            if(0<=u && u<R && 0<=v && v<C)
            {
                if(visit[u][v]==0 && oil[u][v]=='@')
                {
                    visit[u][v]=1;
                    Qx.push(u);
                    Qy.push(v);
                }
            }
        }
    }
    return 1;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i,j,k,z=0;

    while(cin>>R>>C)
    {
        getchar();
        if(R==0 && C==0)
            break;
        for(i=0; i<R; i++)
        {
            cin>>oil[i];
        }
        for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
            {
                if(visit[i][j]==0 && oil[i][j]=='@')
                {
                    z+=bfs(i,j);
                }
            }
        }
        co(z)
        z=0;
        for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
                visit[i][j]=0;
        }
    }









    return 0;
}
