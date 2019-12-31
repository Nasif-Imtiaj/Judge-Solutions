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
vector<ll>x[1000005];
int main()
{
    // freopen("output.txt", "w", stdout);
    ll a,b,c,d,e,i,high=0;
    while(cin>>a>>b)
    {
        for(i=1; i<=a; i++)
        {
            cin>>c;
            x[c].push_back(i);
        }
        while(b--)
        {
            cin>>d>>e;
            if(x[e].size()>=d)
            {
                co(x[e][d-1]);
            }
            else
            {
                co("0");
            }
        }
        for(i=0; i<=1000005; i++)
        {
            x[i].clear();
        }
        high=0;
    }
    return 0;
}
