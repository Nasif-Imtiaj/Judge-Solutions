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
ll store[100000];
int main()
{
//freopen("output.txt", "w", stdout);
    int i,n,k,x,ans,j,t,d;
    for(i=0; i<=10000;i++)
    {
        store[i]=(i*(i+1))/2;
    }
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>x;
        d=store[k+x-1]-store[x-1];
        //cout<<d<<endl;
        ans=store[n]-d;
        printf("Case %d: ",i);
        cout<<ans<<endl;
    }
    return 0;
}
