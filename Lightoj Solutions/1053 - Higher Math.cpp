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
   while(t--)
   {
       int a,b,c;
       cin>>a>>b>>c;
       printf("Case %d: ",cs++);
       if(a==sqrt((b*b)+(c*c))|| b==sqrt((a*a)+(c*c)) || c==sqrt((b*b)+(a*a)))
       cout<<"yes"<<endl;
       else
        cout<<"no"<<endl;
   }






    return 0;
}
