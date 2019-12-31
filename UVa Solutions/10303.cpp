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
ull catalan(ull n)
{
    // Base case
    if (n <= 1) return 1;

    // catalan(n) is sum of catalan(i)*catalan(n-i-1)
    ull res = 0;
    for (ull i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);

    return res;
}
int main()
{
//freopen("output.txt", "w", stdout);

    ull a,b,c;

    cin>>a;
    b=catalan(a);
    co(b)




















    return 0;
}
