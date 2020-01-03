#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int dp[300][300];
string s1,s2,s3;
int Longest_common_subsequence(string s1,string s2)
{
    int len1,len2,i,j;
    len1=s1.length();
    len2=s2.length();
    for(i=0; i<=max(len1,len2); i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(i=1; i<=len1; i++)
    {

        for(j=1; j<=len2; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                if(dp[i-1][j]>=dp[i][j-1])
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
    }
    return dp[len1][len2];
}
int main()
{
  //  freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>s1;
        s2=s1;
        reverse(s2.begin(),s2.end());
        int len=s1.length();
        int lcs=Longest_common_subsequence(s1,s2);
        printf("Case %d: %d\n",cs++,len-lcs);
    }
    return 0;
}
