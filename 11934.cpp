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

  ll a,b,c,l,d,x,i,ans=0;

  while(cin>>a>>b>>c>>d>>l){
  if(a==0 && b==0 && c==0 && d==0 && l==0)
  break;
  for(i=0;i<=l;i++){
    x=(i*i*a)+(i*b)+c;
    if(x%d==0)
        ans++;
  }
  co(ans)
  ans=0;
}





















    return 0;
}
