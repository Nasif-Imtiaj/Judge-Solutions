#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int store[10000];
int dp[10][100002];
int minCoinChange(int coins,int value)
{
    for(int i=0; i<=value; i++)
    {
        dp[0][i]=INT_MAX;///making all the coloumn index from 0 to value max

    }
    for(int i=0; i<=coins; i++) ///making all the row index of coins of the top 0
        dp[i][0]=0;
    for(int i=1; i<=coins; i++)
    {
        for(int j=1; j<=value; j++)
        {
            if(j<store[i])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]= min(dp[i-1][j],dp[i][j-store[i]]+1);
        }
    }
    return dp[coins][value];
}

int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,i;
    store[1]=1;
    for(i=2; i<=10; i++)
        store[i]=i*store[i-1];
    cout<<minCoinChange(8,100000)<<endl;
    while(cin>>a)
    {
        cout<<dp[8][a]<<endl;
    }





    return 0;
}
