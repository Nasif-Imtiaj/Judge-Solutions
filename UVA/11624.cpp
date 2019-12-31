#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int joe_visit[1200][1200],joe_dis[1200][1200];
int fire_dis[1200][1200];
int R,C;
int row[]= {1,0,-1,0,1,-1,1,-1};
int colm[]= {0,1,0,-1,1,-1,-1,1};
string maze[1200];
void bfs_fire(int input_x,int input_y)
{
    queue<pair<int,int> >q;
    fire_dis[input_x][input_y]   = 0;
    q.push(make_pair(input_x,input_y));
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int u = x+row[i];
            int v = y+colm[i];
            if(0<=u && u<R && 0<=v && v<C)
            {
                if(maze[u][v]!='#')
                {
                    if(fire_dis[u][v]>fire_dis[x][y]+1)
                    {
                        if(maze[u][v]=='F')
                            fire_dis[u][v]=0;
                        else
                            fire_dis[u][v]=fire_dis[x][y]+1;
                        q.push(make_pair(u,v));
                    }
                }
            }
        }
    }
    return ;
}
void bfs_joe(int input_x,int input_y)
{
    queue<pair<int,int> >q;
    joe_visit[input_x][input_y] = 1;
    joe_dis[input_x][input_y]   = 0;
    q.push(make_pair(input_x,input_y));
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int u = x+row[i];
            int v = y+colm[i];
            if(0<=u && u<R && 0<=v && v<C)
            {
                if(joe_visit[u][v]==0)
                {
                    if(maze[u][v]=='.')
                    {
                        joe_visit[u][v]=1;
                        joe_dis[u][v] = joe_dis[x][y]+1;
                        q.push(make_pair(u,v));
                    }
                    if(maze[u][v]=='F')
                        bfs_fire(u,v);
                }
            }
        }
    }
    return ;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
   scanf("%d",&t);
    while(t--)
    {
         scanf("%d %d",&R,&C);
        for(int i=0; i<R; i++)
            cin>>maze[i];
        int x,y;
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
            {
                joe_dis[i][j]=INT_MAX;
                joe_visit[i][j]=0;
                fire_dis[i][j]=INT_MAX;
                if(maze[i][j]=='J')
                    x=i,y=j;
            }
        bfs_joe(x,y);
        int ans=INT_MAX;
        for(int i=0; i<R; i++)
        {
            if(joe_dis[i][0]<fire_dis[i][0])
            {
                ans=min(ans,joe_dis[i][0]);
            }
            if(joe_dis[i][C-1]<fire_dis[i][C-1])
            {
                ans=min(ans,joe_dis[i][C-1]);
            }
        }
        for(int i=0; i<C; i++)
        {
            if(joe_dis[0][i]<fire_dis[0][i])
            {
                ans=min(ans,joe_dis[0][i]);
            }
            if(joe_dis[R-1][i]<fire_dis[R-1][i])
            {
                ans=min(ans,joe_dis[R-1][i]);
            }
        }
        if(ans==INT_MAX)
            printf("IMPOSSIBLE\n");
        else
        printf("%d\n",ans+1);
    }
    return 0;
}

