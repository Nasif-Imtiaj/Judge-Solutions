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
#define pi acos(-1)
bool ok[1000];
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i,j;

    cin>>a;

    for(i=1; i<=a; i++)
    {
        b=0;
        for(j=1; j<=a; j++)
        {
            b+=i;
        }
        if(b==13)
        {
            co(i)
            break;
        }
    }












    return 0;
}
