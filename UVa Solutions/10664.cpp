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
int dp[50000];
int x[200];
int knapsack(int n,int w)
{
    int i,j;
    for(i=0; i<=50000; i++)
        dp[i]=0;
    for(i=1; i<=n; i++)
        for(j=w; j>0; j--)
            if(x[i]<=j)
                dp[j]=max(dp[j],x[i]+dp[j-x[i]]);

    return dp[w];
}
int main()
{
    // freopen("output.txt", "w", stdout);

    int t,sum=0,i,b,c,d;
    string s;
    stringstream ss;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        ss.clear();
        ss<<s;
        i=0;
        sum=0;
        while(ss>>b){
            sum+=b;
            i++;
            x[i]=b;

        }
        //cout<<i<<" "<<sum<<endl;
        c=knapsack(i,sum/2);
        d=sum-(2*c);
        if(d==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
