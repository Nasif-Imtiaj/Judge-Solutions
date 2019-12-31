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
string maze[1000];
queue<int>ok;
int visit[1200][1200],dis[1200][1200];
int R,C;
int row[]= {1,0,-1,0};
int colm[]= {0,1,0,-1}; //4 Direction
void bfs(int start_x,int start_y)
{
    queue<int>Qx;
    queue<int>Qy;
    visit[start_x][start_y] = 1;
    dis[start_x][start_y]   = 0;
    Qx.push(start_x);
    Qy.push(start_y);
   maze[start_x][start_y]='#';
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
                if(visit[u][v]==0 && maze[u][v]==' ')
                {
                    visit[u][v]=1;
                    maze[u][v]='#';
                    dis[u][v] = dis[x][y]+1;
                    Qx.push(u);
                    Qy.push(v);
                }
        }
    }
    return ;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,i=0,j,z=0;
    string s;
    cin>>a;
    getchar();
    while(a--)
    {
        while(1)
        {
            getline(cin,s);
            maze[i]=s;
            for(j=0; j<s.length(); j++)
            {
                if(s[j]=='*')
                {
                    ok.push(i);
                    ok.push(j);
                }
            }
            i++;
            if(s[0]=='_')
                break;
        }
        while(!ok.empty())
        {
            int m,n;
            m=ok.front();
            ok.pop();
            n=ok.front();
            ok.pop();
            bfs(m,n);
        }
        for(j=0; j<i; j++)
        {
            cout<<maze[j]<<endl;
        }
        for(i=0;i<1200;i++){
            for(j=0;j<1200;j++)
                visit[i][j]=0;
        }
        i=0;
    }
    return 0;
}
