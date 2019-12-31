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
int main()
{
//freopen("output.txt", "w", stdout);

    ll a,b,c,d,z=0,x=0,y,ans;

    while(cin>>a>>b)
    {
        if(a*2<=b)
        {
            ans=2;
        }
        else
        {
            c=b%a;
           // cout<<c<<endl;
            d=b/c;
            if(b%c!=0)
                d++;
            ans=d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
