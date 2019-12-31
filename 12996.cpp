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
int x[10000];
int y[10000];
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,t,n,sum=0,m,i,j,flg=0;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
            cin>>x[i];
        for(i=0; i<n; i++)
            cin>>y[i];
        for(i=0; i<n; i++)
        {
            if(x[i]<=y[i])
                sum+=x[i];
            else
            {
                flg=1;
                break;
            }
        }
        printf("Case %d: ",j);
        if(sum<=m && flg==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        sum=0;
        flg=0;
    }
    return 0;
}
