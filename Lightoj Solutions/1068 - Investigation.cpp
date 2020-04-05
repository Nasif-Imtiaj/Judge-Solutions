#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define bug printf("bug\n");
#define bug2(var) cout<<var<<" "<<#var<<endl;
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<int>num;
int sz,k,n,m;
int dp[10][2][100][100];
int digitdp(int pos,int issmall,int sum,int val)
{
    if(pos==sz)
    {
        if(!sum && !val)
            return 1;
        return 0;
    }
    if(dp[pos][issmall][sum][val]!=-1)
        return dp[pos][issmall][sum][val];
    int lim;
    if(issmall==0)
        lim=num[pos];
    else
        lim=9;
    int ans=0;
    for(int digit=0; digit<=lim; digit++)
    {
        int cur_issmall=issmall;
        if(issmall==0 && digit<lim)
            cur_issmall=1;
        int cur_sum=(sum+digit)%k;
        int cur_val=((val*10)+digit)%k;
        ans+=digitdp(pos+1,cur_issmall,cur_sum,cur_val);
    }
    return dp[pos][issmall][sum][val]=ans;
}
int solve(int n)
{
    num.clear();
    while(n>0)
    {
        num.push_back(n%10);
        n/=10;
    }
    sz=num.size();
    reverse(num.begin(),num.end());
    memset(dp,-1,sizeof(dp));
    return digitdp(0,0,0,0);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        scanf("%d %d %d",&n,&m,&k);
        if(n>m)
            swap(n,m);
        int cnt;
        if(k>81)
            cnt=0;
        else
        {
            cnt=solve(m)-solve(n-1);
        }
        printf("Case %d: %d\n",cs,cnt);
    }
    return 0;
}
