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
string cable[6000];
string addi(string s1,string s2)
{
    int i,j,z=0,carry=0,len1,len2;
    int a=0,b=0,c=0;
    string ans,extra,meh;
    len1=s1.length();
    len2=s2.length();
    len1--;
    len2--;
    while(len1>-1 || len2>-1)
    {
        a=0;
        b=0;
        if(len1>-1)
        {
            a=s1[len1]-48;
            len1--;
        }
        if(len2>-1)
        {
            b=s2[len2]-48;
            len2--;
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
string sub(string s1,string s2)
{
    int len1,len2,a,b,c,carry=0,d;
    string ans;
    len1=s1.length();
    len1--;
    len2=s2.length();
    len2--;

    while(len1>-1 || len2>-1)
    {
        a=0;
        b=0;
        if(len1>-1)
        {
            a=s1[len1]-48;
            len1--;
        }
        if(len2>-1)
        {
            b=s2[len2]-48;
            len2--;
        }
        if(b>a)
        {
            a=a+10;
            s1[len1]-=1;
        }
        c=a-b;
        ans+=c+48;
    }
    reverse(ans.begin(),ans.end());
    while(ans[0]=='0')
        ans.erase(ans.begin()+0);
    return ans;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,a;
    string x,y;
    cable[0]="1";
    cable[1]="3";
    cable[2]="8";
    for(i=3; i<=2000; i++)
    {
        x=addi(cable[i-1],cable[i-1]);
        y=addi(cable[i-2],cable[i-2]);
        cable[i]=addi(x,y);
        cable[i]=sub(cable[i],cable[i-3]);
    }
    while(cin>>a)
    {
        if(a==0)
            break;
        cout<<cable[a-1]<<endl;
    }
    return 0;
}
