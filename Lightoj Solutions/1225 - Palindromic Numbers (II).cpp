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
     string s,s1;
     cin>>s;
     s1=s;
     reverse(s1.begin(),s1.end());
     printf("Case %d: ",cs++);
     if(s1==s)
        cout<<"Yes"<<endl;
     else
        cout<<"No"<<endl;
   }





    return 0;
}
