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
    int a,b,c,d,x[201],i,high=0;
    string s,ans;
    while(getline(cin,s)){
    fill(x,x+200,0);
    high=0;
    ans.clear();
    for(i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            x[s[i]]++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            x[s[i]]++;
        }
    }
    for(i=65; i<=90; i++)
    {
        if(x[i]>high)
            high=x[i];
    }
    for(i=97; i<=122; i++)
    {
        if(x[i]>high)
            high=x[i];
    }
    for(i=65; i<=90; i++)
    {
        if(x[i]==high)
            ans+=i;
    }
    for(i=97; i<=122; i++)
    {
        if(x[i]==high)
            ans+=i;
    }
    cout<<ans<<" "<<high<<endl;
    }
    return 0;
}
