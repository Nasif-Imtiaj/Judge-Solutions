#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
//freopen("output.txt", "w", stdout);

   int t,cs=1;
   cin>>t;
   while(t--){
      ll a,b,c,d,e,f;
      cin>>a>>b;
      e=a/(b*2);
      c=(b*(b+1))/2;
      b+=b;
      d=((b*(b+1))/2)-c;
      f=(d-c)*e;
      printf("Case %d: ",cs++);
      cout<<f<<endl;

   }





    return 0;
}
