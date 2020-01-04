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
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,t,d;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        cin>>a>>b;
        c=(a*b);
        d=c/2;
        if(c%2!=0)
            d++;
        if(a==2 || b==2)
        {
            d=a*b;
            int mx=0;
            mx=max(a,b);
            for(int i=3; i<=mx; i+=4)
            {
                d-=2;
            }
            for(int i=4; i<=mx; i+=4)
            {
                d-=2;
            }
        }
        if(a==1 || b==1)
            d=max(a,b);
        printf("Case %d: %d\n",cs,d);
    }
    return 0;
}
