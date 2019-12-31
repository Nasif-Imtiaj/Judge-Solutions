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
string make_binary(ll a)
{
    int remain;
    string value;
    while(a>0)
    {
        remain=a%2;
        value+=remain+48;
        a/=2;
    }
    value+=a+48;
    reverse(value.begin(),value.end());
    return value;
}
ll power(ll a)
{

    int z=1;

    while(a--)
    {
        z*=2;
    }
    return z;
}
ll make_int(string s)
{
    ll i,j,value=0,len;
    len=s.length();
    len--;
    for(i=0; i<s.length(); i++)
    {
        value+=power(len)*(s[i]-48);
        len--;
    }
    return value;
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,i,len1,len2,res=0,outcome;
    string one,two,ans;
    while(cin>>a>>b)
    {
        one=make_binary(a);
        two=make_binary(b);
        //co(one);
        //co(two);
        len1=one.length();
        len2=two.length();
        len1--;
        len2--;
        while(len1>-1 || len2>-1)
        {
            res=0;
            if(len1>-1)
            {
                res+=one[len1]-48;
                len1--;
            }
            if(len2>-1)
            {
                res+=two[len2]-48;
                len2--;
            }
            if(res==2)
                res=0;
            ans+=res+48;
        }
        reverse(ans.begin(),ans.end());
        // co(ans);
        outcome=make_int(ans);
        co(outcome);
        ans.clear();
        res=0;
    }
    return 0;
}
