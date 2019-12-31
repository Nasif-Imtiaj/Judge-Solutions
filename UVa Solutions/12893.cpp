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
ll cnt(ll a)
{
    if(a==0)
        return 0;
    ll b=cnt(a/2)+a%2;
    return b;
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        cout<<cnt(b)<<endl;
    }
    return 0;
}
