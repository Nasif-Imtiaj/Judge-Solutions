#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int cost[1000][1000];
int track[1000][1000];
int m1[]= {1,0,-1,0};
int m2[]= {0,1,0,-1};
int R,C;
void dijkstra(int s,int e)
{
    memset(track,-1,sizeof(track));
    priority_queue<pair<int, pair<int,int> > >q;
    q.push(make_pair(0,make_pair(s,e)));
    cost[s][e]=0;
    track[s][e]=0;
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
                if(track[x][y]==-1 && cost[x][y]!=-1 || track[x][y]>cost[x][y]+track[father][mother] && cost[x][y]!=-1)
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

    while(cin>>C>>R)
    {
        if(C==0 && R==0)
            break;
        getchar();
        int i,j,st1,st2,en1,en2;
        string s;
        for(i=0; i<R; i++)
        {
            cin>>s;
            for(j=0; j<C; j++)
            {
                if(s[j]=='S')
                {
                    st1=i;
                    st2=j;
                    continue;
                }
                if(s[j]=='D')
                {
                    en1=i;
                    en2=j;
                    cost[i][j]=0;
                    continue;
                }
                if(s[j]=='X')
                    cost[i][j]=-1;
                else
                    cost[i][j]=s[j]-48;
            }
        }
        dijkstra(st1,st2);
       /* for(i=0; i<R; i++)
        {
            for(j=0; j<C; j++)
                cout<<track[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<track[en1][en2]<<endl;
    }

    return 0;
}
