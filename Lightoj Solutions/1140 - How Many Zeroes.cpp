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
long long countDigitOccurance(long long n, long long d)
{
    long long res=0;
    for(long long i=1; i<=n; i*=10)
    {
        long long x=n/i;
        long long y=n%i;
        if(d>0)
        {
            if(x%10==d)
                res+=x/10*i+y+1;
            else if(x%10<d)
                res+=x/10*i;
            else
                res+=(x/10+1)*i;
        }
        else
        {
            if(x%10==d)
                res+=(x>9?x/10-1:0)*i+y+1;
            if(x%10>d)
                res+=x/10*i;
        }
    }
    return res;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        long long  a,b,cnt=0;
        scanf("%lld %lld",&a,&b);
        if(a==0)
            cnt++;
        if(a>0)
            a--;
        cnt+=countDigitOccurance(b,0)-countDigitOccurance(a,0);
        printf("Case %d: %lld\n",cs++,cnt);
    }
    return 0;
}


