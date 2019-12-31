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
  ll a,b,c,d,e,ans;

  while(cin>>a>>b>>c>>d>>e){
    if(a==0 && b==0 && c==0 && d==0 && e==0)
        break;
    ans=a*b*c*d*d*e*e;
    cout<<ans<<endl;
  }












    return 0;
}
