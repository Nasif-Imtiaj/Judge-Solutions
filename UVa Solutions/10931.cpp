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
string make_bin(ll a){
    string ans;
    int b;
    while(a>0){
        b=a%2;
        a/=2;
        ans+=b+48;
    }
    reverse(ans.begin(),ans.end());
 return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);

  ll a,ans=0;
  string s;

  while(cin>>a){
        if(a==0)
        break;
    s=make_bin(a);
    for(int i=0;i<s.length();i++){
        ans+=s[i]-48;
    }
    printf("The parity of ");
    cout<<s;
    printf(" is %lld (mod 2).\n",ans);
    ans=0;
  }

    return 0;
}
