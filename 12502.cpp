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
int main()
{
    // freopen("output.txt", "w", stdout);

    int a,b,c,d,ans;
    double x,y,z,w,l;
    cin>>d;
    while(d--)
    {
        cin>>x>>y>>z;
        l=x+(x-y);
        w=z*l/(x+y);
        ans=w;
        if(ans<0)
            ans=0;
        co(ans)
    }
    return 0;
}
