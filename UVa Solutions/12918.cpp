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
    ll a,b,c,d,m,n,o,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        m=((b*(b+1))/2);
        // cout<<m<<endl;
        c=(b-a);
        n=((c*(c+1))/2);
        o=m-n;
        cout<<o-a<<endl;
    }
    return 0;
}
