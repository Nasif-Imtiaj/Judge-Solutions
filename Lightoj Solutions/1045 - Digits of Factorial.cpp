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
double pre[1000005];
int main()
{
//freopen("output.txt", "w", stdout);

    int i,t,cs=1;
    for(i=1; i<=1000000; i++)
        pre[i]=pre[i-1]+log(i);
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        printf("Case %d: ",cs++);
        ll ans=pre[n]/log(b)+1;
        cout<<ans<<endl;
    }





    return 0;
}

