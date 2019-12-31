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
    ll a,b,c,d,sum1,sum2;
    while(cin>>a)
    {
        b=a/2;
        b++;
        b=b*b;
        sum1=b*b;
        b-=3;
        sum2=b*b;
        cout<<sum1-sum2<<endl;
    }
    return 0;
}
