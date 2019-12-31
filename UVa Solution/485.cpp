#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
string add_s(string x,string y)
{
    ll a,b,c,i,j,z=0,carry=0,lenx,leny;
    string ans;
    lenx=x.length();
    leny=y.length();
    lenx--;
    leny--;
    while(lenx>=0 || leny>=0)
    {
        a=0;
        b=0;
        if(lenx>=0)
        {
            a=x[lenx]-48;
            lenx--;
        }
        if(leny>=0)
        {
            b=y[leny]-48;
            leny--;
        }
        c=a+b+carry;
        carry=0;
        if(c>9)
        {
            carry=1;
            c=c%10;
        }
        ans+=c+48;
    }
    if(carry!=0)
        ans+=carry+48;
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int z=0,time_up=0;
    string s1,s2,lim,track,ans,temp,x,result,one,lim2;
    stringstream ok;
    lim="1000000000000000000000000000000000000000000000000000000000000";
    lim2="10";
    ans="1 1";
    one="1";
    track="1";
    cout<<"1"<<endl;
    while(1)
    {
         if(time_up==1)
            break;
        cout<<ans<<endl;

        ok.clear();
        result.clear();
        z=-1;
        ok<<ans;
        result+=one;
        while(ok>>x)
        {
            if(z==-1)
            {
                s1=x;
                z=0;
                continue;
            }
            s2=x;
            if(s2.length()==lim.length())
                time_up=1;
            if(s1.length()==lim.length())
                time_up=1;
            temp=add_s(s1,s2);
            result+=" ";
            result+=temp;
            s1=s2;
        }
        result+=" ";
        result+=one;
        ans=result;
    }
    return 0;
}
