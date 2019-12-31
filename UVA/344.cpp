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
int i[1000],v[1000],x[1000],l[1000],c[1000];
string rom[1000];
string make_roman(int a)
{
    int b;
    string ans;
    if(a/100>0)
    {
        b=a/100;
        while(b--)
            ans+="c";
        a=a%100;
    }
    if(a==0)
    {
        return ans;
    }
    if(a/90>0)
    {
        ans="xc"+ans;
        a=a%90;
    }
    if(a==0)
        return ans;
    if(a/50>0)
    {
        b=a/50;
        while(b--)
            ans+="l";
        a=a%50;
    }
    if(a==0)
        return ans;
    if(a/40>0)
    {
        ans="xl"+ans;
        a=a%40;
    }
    if(a==0)
    {
        return ans;
    }
    if(a/10>0)
    {
        b=a/10;
        while(b--)
            ans+="x";
        a=a%10;
    }
    if(a==0)
    {
        return ans;
    }
    if(a==9)
    {
        ans="ix"+ans;
        return ans;
    }

    if(a/5>0)
    {
        b=a/5;
        while(b--)
            ans+="v";
        a=a%5;
    }
    if(a==0)
    {
        return ans;
    }
    if(a==4)
    {
        ans="iv"+ans;
        return ans;
    }
    if(a%1==0)
    {
        b=a/1;
        while(b--)
            ans+="i";
        a=a%1;
    }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,d,j,k;
    string s;
    for(k=1; k<=100; k++)
    {
        rom[k]=make_roman(k);
        s=rom[k];
        // co(s)
        for(j=0; j<s.length(); j++)
        {
            if(s[j]=='i')
                i[k]++;
            else if(s[j]=='v')
                v[k]++;
            else if(s[j]=='x')
                x[k]++;
            else if(s[j]=='l')
                l[k]++;
            else if(s[j]=='c')
                c[k]++;
        }
        i[k]+=i[k-1];
        v[k]+=v[k-1];
        x[k]+=x[k-1];
        l[k]+=l[k-1];
        c[k]+=c[k-1];
    }
    while(cin>>a)
    {
        if(a==0)
            break;
        cout<<a<<": "<<i[a]<<" i, "<<v[a]<<" v, "<<x[a]<<" x, "<<l[a]<<" l, "<<c[a]<<" c"<<endl;
    }












    return 0;
}
