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
map<string,string>path;
map<string,int>visit;
map<string,vector<string>>graph_letters;
int bfs(string start,string finish)
{
    queue<string>QS;
    visit[start]=1;
    QS.push(start);
    while(!QS.empty())
    {
        string parent=QS.front();
        QS.pop();
        if(parent==finish)
            return 1;
        for(int i=0; i<graph_letters[parent].size(); i++)
        {
            string child=graph_letters[parent][i];
            if(visit[child]==0)
            {
                visit[child]=1;
                path[child]=parent;
                QS.push(child);
            }
        }
    }
    return -1;
}
void printpath(string a, string b)
{
    if(a==b)
    {
        return;
    }
    printpath(path[a],b);
    cout<<path[a][0];
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i,j,blank=0;

    string x,y,S,E;
    cin>>a;
    while(a--)
    {
        if(blank!=0)
            cout<<endl;
        cin>>b>>c;
        while(b--)
        {
            cin>>x>>y;
            graph_letters[x].push_back(y);
            graph_letters[y].push_back(x);
        }
        while(c--)
        {
            cin>>S>>E;
            bfs(S,E);
            printpath(E,S);
            path.clear();
            visit.clear();
            cout<<E[0]<<endl;
        }
        blank++;
        graph_letters.clear();
    }
    return 0;
}

