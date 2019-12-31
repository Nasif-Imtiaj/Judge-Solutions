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
vector<ll>ok;
int main()
{
//freopen("output.txt", "w", stdout);

    ll a,b,c,d,e;
    while(cin>>a)
    {
        ok.push_back(a);
        sort(ok.begin(),ok.end());
        b=ok.size();
        if(b%2!=0)
            cout<<ok[b/2]<<endl;
        else
        {
            c=b/2;
            d=b/2;
            d--;
            c=ok[c];
            d=ok[d];
            e=(c+d)/2;
            cout<<e<<endl;
        }
    }
    return 0;
}
