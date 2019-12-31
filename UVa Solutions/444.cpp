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
int x[200];
#define pi acos(-1)
void encoding(string s)
{
    int len,i,a,b;
    string ans,temp;
    len=s.length();
    for(i=0; i<len; i++)
    {
        a=s[i];
        while(a>0)
        {
            b=a%10;
            a/=10;
            temp+=b+48;
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        temp.clear();
    }
    reverse(ans.begin(),ans.end());
    co(ans)
}
void decoding(string s)
{
    reverse(s.begin(),s.end());
    int i,len,j,z=0,k=0;
    string ans,temp;
    len=s.length();
    for(i=0; i<len; i+=2)
    {
        k=s[i]-48;
        k*=10;
        k+=s[i+1]-48;
        if(x[k]==1)
        {
            ans+=k;
        }
        else
        {
            z=s[i+2]-48;
            k*=10;
            k+=z;
            ans+=k;
            i++;
        }
    }
    co(ans)
}
int main()
{
//freopen("output.txt", "w", stdout);
    x[32]=1;
    x[33]=1;
    x[44]=1;
    x[46]=1;
    x[58]=1;
    x[59]=1;
    x[63]=1;
    string s,ans,temp;
    int a,b,c,d,i,j;
    for(i=65; i<=90; i++)
        x[i]=1;
    for(i=97; i<=122; i++)
        x[i]=1;
    while(getline(cin,s))
    {
        if(s[0]>='0' && s[0]<='9')
            decoding(s);
        else
            encoding(s);
    }
    return 0;
}
