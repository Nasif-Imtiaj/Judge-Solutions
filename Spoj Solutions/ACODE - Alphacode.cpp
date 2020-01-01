#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
string s;
int len,zero;
int dp[5050];
int check(int x,int y)
{
    if(s[x]=='0')
        return 0;
    int digit=0;
    digit+=s[x]-48;
    digit*=10;
    digit+=s[y]-48;
    if(digit<=26)
        return 1;
    return 0;
}
int recur(int pos)
{
    if(s[pos]=='0')
        return 0;
    if(pos>=len)
    {
        return 1;
    }
    if(dp[pos])
        return dp[pos];
    int ans=0;
    ans=recur(pos+1);
    if(pos+1<len && check(pos,pos+1))
        ans+=recur(pos+2);
    return dp[pos]=ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    while(cin>>s)
    {
        if(s[0]=='0')
            break;
        len=s.length();
        zero=1;
        int ans=recur(0);
        printf("%d\n",ans);
        for(int i=0; i<=len; i++)
            dp[i]=0;
    }
    return 0;
}
