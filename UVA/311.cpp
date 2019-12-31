#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
vector<pair<int,int>>ok;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,e,f,z=0,x,y;

    while(cin>>a>>b>>c>>d>>e>>f)
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
            break;
        z=0;
        ok.push_back(make_pair(a,b));
        ok.push_back(make_pair(c,d));
        ok.push_back(make_pair(e,f));
        sort(ok.begin(),ok.end());
        x=ok[2].first-ok[1].first;
        y=ok[2].second-ok[1].second;
        if(x>=0 && y>=0)
            z++;
        else
            z+=2;
        x=ok[2].first-ok[0].first;
        y=ok[2].second-ok[0].second;
        if(!(x>=0 && y>=0))
        {
            x=ok[1].first-ok[0].first;
            y=ok[1].second-ok[0].second;
            if(!(x>=0 && y>=0))
                z++;
        }
        co(z)
    }












    return 0;
}
