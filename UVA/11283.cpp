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
int R,C,len,found;
int row[]= {1,0,-1,0,1,-1,1,-1};
int colm[]= {0,1,0,-1,1,-1,-1,1};
char grid[5][5],word[20];
bool visit[5][5];
void dfs(int x,int y,int pos)
{
    if(len==pos)
        found=1;
    if(found)
        return;
    for(int i=0; i<8; i++)
    {
        int u = x+row[i];
        int v = y+colm[i];
        if(0<=u && u<R && 0<=v && v<C)
        {
            if(visit[u][v]==0 && grid[u][v]==word[pos])
            {
                visit[u][v]=1;
                dfs(u,v,pos+1);
                visit[u][v]=0;
            }

        }
    }

    return ;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    R=4,C=4;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0; i<4; i++)
            scanf("%s",grid[i]);
        int n;
        scanf("%d",&n);
        int points=0;
        while(n--)
        {
            scanf("%s",word);
            len=strlen(word);
            found=0;
            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(grid[i][j]==word[0])
                    {
                        found=0;
                        visit[i][j]=1;
                        dfs(i,j,1);
                        visit[i][j]=0;
                        if(found)
                            break;
                    }
                }
                if(found)
                    break;
            }
            if(found)
            {
                if(len<=4)
                    points++;
                else if(len==5)
                    points+=2;
                else if(len==6)
                    points+=3;
                else if(len==7)
                    points+=5;
                else
                    points+=11;
            }
        }
        printf("Score for Boggle game #%d: %d\n",cs++,points);
    }

    return 0;
}

