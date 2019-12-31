#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int x[10000];
#define pi acos(-1)
void mark(int day,int party)
{
    int item;
    item=party;
    while(item<=day)
    {
        if(x[item]!=-1)
            x[item]=1;
        item+=party;
    }
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int day,team,hortal=0,t,a,i;
    cin>>t;
    while(t--)
    {
        cin>>day>>team;
        for(i=6; i<=day; i+=7)
            x[i]=-1;
        for(i=7; i<=day; i+=7)
            x[i]=-1;
        while(team--)
        {
            cin>>a;
            mark(day,a);
        }
        for(int i=0; i<=day; i++)
            if(x[i]==1)
                hortal++;
        cout<<hortal<<endl;
        fill(x,x+10000,0);
        hortal=0;
    }
    return 0;
}
