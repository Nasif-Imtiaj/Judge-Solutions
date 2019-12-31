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
int visit[1200][1200],dis[1200][1200];
int R,C;
int row[]= {1,0,-1,0};
int colm[]= {0,1,0,-1}; //4 Direction
int mines[1200][1200];
int can_go[1200][1200];
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
                if(visit[u][v]==0 && can_go[u][v]==0)
                {
                    visit[u][v]=1;
                    dis[u][v] = dis[x][y]+1;
                    Qx.push(u);
                    Qy.push(v);
                }
            }
        }
    }

    return ;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,d,e,r,x,y,z,start_1,start_2,end_1,end_2;
    while(cin>>R>>C)
    {
        if(R==0 && C==0)
            break;
        cin>>a;
        while(a--)
        {
            cin>>b;
            cin>>d;
            while(d--)
            {
                cin>>e;
                can_go[b][e]=-1;
            }
        }
        cin>>start_1>>start_2;
        cin>>end_1>>end_2;
        bfs(start_1,start_2);
        cout<<dis[end_1][end_2]<<endl;
        int i,j;
        for(i=0; i<1200; i++)
        {
            for(j=0; j<1200; j++)
            {
                visit[i][j]=0;
                dis[i][j]=0;
                mines[i][j]=0;
                can_go[i][j]=0;
            }
        }
    }
    return 0;
}
