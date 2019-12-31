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
//freopen("output.txt", "w", stdout);
    ll a,b,c,ans=0,flg=0;
    cin>>b;
    while(b--)
    {
        cin>>a;
        if(a%2==0)
        {
            flg=1;
        }
        a/=2;
        ans=a*(a-1);
        if(flg==0)
            ans+=a;
        co(ans)
        flg=0;
    }
    return 0;
}
