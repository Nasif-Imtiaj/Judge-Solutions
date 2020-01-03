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
ll a, b, c, d, e, f,dp[10002];
ll fn( ll n )
{
    if(dp[n]!=-1)
        return dp[n];
    if( n == 0 )
        return a;
    if( n == 1 )
        return b;
    if( n == 2 )
        return c;
    if( n == 3 )
        return d;
    if( n == 4 )
        return e;
    if( n == 5 )
        return f;
    return dp[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )% 10000007;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        fill(dp,dp+10002,-1);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
