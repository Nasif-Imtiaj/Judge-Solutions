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
int dist[8][8];
int visit[8][8];
int row[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int colm[] = {-1, -2, -2, -1, 1, 2, 2, 1};
void bfs(int start_x,int start_y)
{
    queue<int>QX;
    queue<int>QY;
    visit[start_x][start_y]=1;
    dist[start_x][start_y]=0;
    QX.push(start_x);
    QY.push(start_y);
    while(!QX.empty())
    {
        int x,y,i;
        x=QX.front();
        y=QY.front();

        QX.pop();
        QY.pop();

        for(i=0; i<8; i++)
        {
            int u,v;

            u=x+row[i];
            v=y+colm[i];
            if(u>=0 && u<8 && v>=0 && v<8)
            {

                if(visit[u][v]==0)
                {
                    visit[u][v]=1;
                    dist[u][v]=dist[x][y]+1;
                    QX.push(u);
                    QY.push(v);
                }

            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    string s,s1;
    int x1,y1,x2,y2,i,j;
    while(cin>>s>>s1)
    {
        x1=s[1]-49;
        y1=s[0]-97;
        x2=s1[1]-49;
        y2=s1[0]-97;
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                dist[i][j]=0;
                visit[i][j]=0;
            }
        }
        bfs(x1,y1);
        cout<<"To get from "<<s<<" to "<<s1<<" takes "<<dist[x2][y2]<<" knight moves."<<endl;
    }
    return 0;
}
