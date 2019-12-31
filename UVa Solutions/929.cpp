#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int cost[1000][1000];
int track[1000][1000];
int m1[]= {1,0,-1,0};
int m2[]= {0,1,0,-1};
int R,C;
void dijkstra()
{
    priority_queue<pair<int, pair<int,int> > >q;
    q.push(make_pair(cost[0][0],make_pair(0,0)));
    track[0][0]=cost[0][0];
    while(!q.empty())
    {
        int father=q.top().second.first;
        int mother=q.top().second.second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int x=m1[i]+father;
            int y=m2[i]+mother;
            if(0<=x && x<R && 0<=y && y<C)
            {
                if(track[x][y]==-1 || track[x][y]>cost[x][y]+track[father][mother])
                {
                    // cout<<x<<" "<<y<<endl;
                    track[x][y]=cost[x][y]+track[father][mother];
                    q.push(make_pair(-1*track[x][y],make_pair(x,y)));
                }
            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);

    int b,i,j;
    cin>>b;
    while(b--)
    {
        cin>>R>>C;
        for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
            {
                cin>>cost[i][j];
                track[i][j]=-1;
            }
        }
        dijkstra();
        cout<<track[R-1][C-1]<<endl;
    }
    return 0;
}
