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
int visit[200][200];
int R,C,m,n,odd,even;
string grid[200];
void bfs(int input_x,int input_y)
{
    int row[10];
    int colm[10];
    row[0]=n;
    colm[0]=m;
    row[1]=-n;
    colm[1]=m;
    row[2]=n;
    colm[2]=-m;
    row[3]=-n;
    colm[3]=-m;
    row[4]=m;
    colm[4]=n;
    row[5]=-m;
    colm[5]=n;
    row[6]=m;
    colm[6]=-n;
    row[7]=-m;
    colm[7]=-n;
    queue<pair<int,int> >q;
    visit[input_x][input_y] = 1;
    q.push(make_pair(input_x,input_y));
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        map<pair<int,int>,int >mp;
        q.pop();
        int cnt=0;
        for(int i=0; i<8; i++)
        {
            int u = x+row[i];
            int v = y+colm[i];
            if(0<=u && u<R && 0<=v && v<C)
            {
                if(grid[u][v]=='*' && mp[make_pair(u,v)]==0)
                {
                    cnt++;
                    mp[make_pair(u,v)]=1;
                }
                if(visit[u][v]==0 && grid[u][v]=='*')
                {
                    visit[u][v]=1;
                    mp[make_pair(u,v)]=1;
                    q.push(make_pair(u,v));
                }
            }
        }
        if(cnt&1)
            odd++;
        else
            even++;

    }
    return ;
}
int main()
{
    //freopen("output.txt", "w", stdout);
    string s="";
    for(int i=0; i<105; i++)
        s+="*";
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&R,&C,&m,&n);
        for(int i=0; i<R; i++)
            grid[i]=s;
        int k;
        scanf("%d",&k);
        while(k--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            grid[a][b]='#';
        }
        bfs(0,0);
        printf("Case %d: %d %d\n",cs++,even,odd);
        odd=0;
        even=0;
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
                visit[i][j]=0;
    }

    return 0;
}

