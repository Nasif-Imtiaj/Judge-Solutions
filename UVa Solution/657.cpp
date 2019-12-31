#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
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
string die[200];
int visit[100][100];
int sp_visit[100][100];
int R,C;
int row[]= {0,0,1,-1,1,1,-1,-1};
int colm[]= {1,-1,0,0,1,-1,-1,1}; //4 Direction
vector<int>ans;
int special_X(int m,int n)
{
    int value=0;
    queue<int>x;
    queue<int>y;
    x.push(m);
    y.push(n);
    sp_visit[m][n]=1;
    while(!x.empty())
    {
        value++;
        int f,g;
        f=x.front();
        g=y.front();
        while(die[f][g]!='.' && 0<=f && f<R && 0<=g && g<C)
        {
            f++;
            if(die[f][g]=='X' && sp_visit[f][g]==0)
            {
                x.push(f);
                y.push(g);
                sp_visit[f][g]=1;
            }
        }
        f=x.front();
        g=y.front();
        while(0<=f && f<R && 0<=g && g<C && die[f][g]!='.')
        {
            f--;
            if(die[f][g]=='X' && sp_visit[f][g]==0)
            {
                x.push(f);
                y.push(g);
                sp_visit[f][g]=1;
            }
        }
        f=x.front();
        g=y.front();
        while(0<=f && f<R && 0<=g && g<C && die[f][g]!='.')
        {
            g++;
            if(die[f][g]=='X' && sp_visit[f][g]==0)
            {
                x.push(f);
                y.push(g);
                sp_visit[f][g]=1;
            }
        }
        f=x.front();
        g=y.front();
        while(0<=f && f<R && 0<=g && g<C && die[f][g]!='.')
        {
            g--;
            if(die[f][g]=='X' && sp_visit[f][g]==0)
            {
                x.push(f);
                y.push(g);
                sp_visit[f][g]=1;
            }
        }
        x.pop();
        y.pop();
    }
    return value;
}
void bfs(int start_x,int start_y)
{
    queue<int>Qx;
    queue<int>Qy;
    int k=0;
    visit[start_x][start_y] = 1;
    Qx.push(start_x);
    Qy.push(start_y);
    while(!Qx.empty())
    {
        int x = Qx.front();
        int y = Qy.front();
        Qx.pop();
        Qy.pop();
        if(die[x][y]=='X' && sp_visit[x][y]==0)
                    {
                        k=max(special_X(x,y),k);
                    }
        for(int i=0; i<8; i++) // for four direction move
        {
            int u = x+row[i];
            int v = y+colm[i];
            if(0<=u && u<R && 0<=v && v<C)
            {
                if(visit[u][v]==0 && die[u][v]=='*' || visit[u][v]==0 && die[u][v]=='X')
                {
                    visit[u][v]=1;
                    Qx.push(u);
                    Qy.push(v);
                    if(die[u][v]=='X' && sp_visit[u][v]==0)
                    {
                        k=max(special_X(u,v),k);
                    }
                }
            }
        }
    }
    ans.push_back(k);
    return;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int i,j,k,z=0,l=0,t=0;

    while(cin>>C>>R)
    {
        t++;
        if(C==0 && R==0)
            break;
        getchar();
        for(i=0; i<R; i++)
        {
            cin>>die[i];
        }
        for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
            {
                if(die[i][j]=='*' && visit[i][j]==0|| die[i][j]=='X'&& visit[i][j]==0)
                {
                    bfs(i,j);
                }
            }
        }

        sort(ans.begin(),ans.end());
        cout<<"Throw "<<t<<endl;
        for(i=0; i<ans.size()-1; i++)
            cout<<ans[i]<<" ";
        cout<<ans[i]<<endl;
        ans.clear();
        for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
            {
                visit[i][j]=0;
                sp_visit[i][j]=0;
            }
        }
    }
    return 0;
}
