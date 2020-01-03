#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
//freopen("output.txt", "w", stdout);
    int w,n,x,y;
    while(scanf("%d",&w)!=EOF)
    {
        scanf("%d",&n);
        ll l=0;
        while(n--)
        {
            scanf("%d %d",&x,&y);
            l+=(x*y);
        }
        printf("%lld\n",l/w);
    }
    return 0;
}
