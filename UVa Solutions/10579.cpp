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
string fibo[6000];
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
int main()
{
//freopen("output.txt", "w", stdout);
    int i,a;
    fibo[0]="0";
    fibo[1]="1";
    for(i=2; i<=5000; i++)
    {
        fibo[i]=addi(fibo[i-1],fibo[i-2]);
    }
    while(cin>>a)
    {
        cout<<fibo[a]<<endl;
    }
    return 0;
}
