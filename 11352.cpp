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
int visit[102][102];
int dis[102][102];
int Krow[8] = {2, 1, -1, -2, -2, -1,  1,  2 };
int Kclm[8] = {1, 2,  2,  1, -1, -2, -2, -1 };
int Qrow[]= {-1,1,0,0,1,1,-1,-1};
int Qclm[]= {0,0,1,-1,1,-1,1,-1};
int R,C;
string chess[200];
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

        for(int i=0; i<8; i++) // for four direction move
        {
            int u = x+Qrow[i];
            int v = y+Qclm[i];
            if(0<=u && u<R && 0<=v && v<C)
            {
                if(visit[u][v]==0 || visit[u][v]==5)
                {
                    if(chess[u][v]=='.' ||chess[u][v]=='B')
                    {
                        visit[u][v]=1;
                        dis[u][v] = dis[x][y]+1;
                        Qx.push(u);
                        Qy.push(v);
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
    int i,j,s1,s2,e1,e2,n;
    cin>>n;
    while(n--){
    cin>>R>>C;
    for(i=0; i<R; i++)
    {
        cin>>chess[i];
        for(j=0; j<C; j++)
        {
            if(chess[i][j]=='A')
            {
                s1=i;
                s2=j;
            }
            if(chess[i][j]=='B')
            {
                visit[i][j]=5;
                e1=i;
                e2=j;
            }
            if(chess[i][j]=='Z')
            {
                for(int k=0; k<8; k++)
                {
                    int u,v;
                    u=Krow[k]+i;
                    v=Kclm[k]+j;
                    if(u>=0 && u<R && v>=0 && v<C && visit[u][v]!=5)
                    {
                        visit[u][v]=1;
                    }
                }
            }
        }
    }
    bfs(s1,s2);
    if(dis[e1][e2]==0){
        cout<<"King Peter, you can't go now!"<<endl;
    }
    else{
        cout<<"Minimal possible length of a trip is "<<dis[e1][e2]<<endl;
    }
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            visit[i][j]=0;
            dis[i][j]=0;
        }
    }
    }
    return 0;
}
