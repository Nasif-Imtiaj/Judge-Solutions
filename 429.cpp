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
vector<int>graph[300];
string words[300];
int dist[300], visit[300];
void bfs(int src)
{
    visit[src] = 1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int i=0; i<graph[parent].size(); i++)
        {
            int child = graph[parent][i];
            if(visit[child] == 0)
            {
                visit[child]=1;
                dist[child]=dist[parent]+1;
                q.push(child);
            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        int pos=0;
        map<string,int>mp;
        while(cin>>s)
        {
            if(s[0]=='*')
                break;
            mp[s]=pos;
            words[pos++]=s;
        }
        for(int i=0; i<pos; i++)
        {
            int sz1=words[i].length();
            for(int j=i+1; j<pos; j++)
            {
                int sz2=words[j].length();
                if(sz1==sz2)
                {
                    int dif=0;
                    for(int k=0; k<sz1; k++)
                        if(words[i][k]!=words[j][k])
                            dif++;
                    if(dif==1)
                    {
                        graph[i].push_back(j);
                        graph[j].push_back(i);
                    }
                }
            }
        }
        getchar();
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
            stringstream ss;
            string x,y;
            ss<<s;
            ss>>x;
            ss>>y;
            bfs(mp[x]);
            cout<<x<<" "<<y;
            printf(" %d\n",dist[mp[y]]);
            for(int i=0; i<pos; i++)
                visit[i]=0,dist[i]=0;
        }
        if(t)
            printf("\n");
        for(int i=0;i<pos;i++)
            graph[i].clear();
    }
    return 0;
}

