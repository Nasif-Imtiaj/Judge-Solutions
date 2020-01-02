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
int dp[6300][6300],len;
char s1[6300],s2[6300];
int Longest_common_subsequence()
{
    int i,j;
    for(i=0; i<=len; i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(i=1; i<=len; i++)
    {

        for(j=1; j<=len; j++)
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
    return dp[len][len];
}
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s1);
        len=strlen(s1);
        for(int i=0,j=len-1;i<len;i++,j--)
            s2[i]=s1[j];
        printf("%d\n",len-Longest_common_subsequence());
    }
    return 0;
}


