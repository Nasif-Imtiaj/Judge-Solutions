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
int x[1005];
int main()
{
//freopen("output.txt", "w", stdout);

    ll a,b,c,d,z=0,t,i,j,ans=0;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a>>b;
            x[b]+=a;
            z+=a;
        }
        for(i=1; i<=1000; i++)
        {
            if(x[i]!=0)
            {
                a=i*z;
                ans=max(ans,a);
                z-=x[i];
            }
        }
        printf("Case %d: ",j);
        cout<<ans<<endl;
        fill(x,x+1000,0);
        z=0;
        ans=0;
    }
    return 0;
}
