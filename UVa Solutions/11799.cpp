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
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i=1,z=0;

    cin>>a;
    while(a--)
    {
        cin>>b;
        while(b--)
        {
            cin>>c;
            z=max(z,c);
        }
        printf("Case %d: %d\n",i,z);
        z=0;
        i++;
    }
    return 0;
}
