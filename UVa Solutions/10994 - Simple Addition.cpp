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
int F(int n)
{
    if(n==0)
        return 0;
    if(n%10>0)
        return n%10;
    return F(n/10);
}
int pre[100];
ll find_sum(int n)
{
    ll sum=0;
    int mul=n/90;
    sum+=pre[90]*mul;
    sum+=pre[n%90];
return sum;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int n,m;
    for(int i=1; i<=90; i++)
    {
        int temp=F(i);
        pre[i]=pre[i-1]+temp;
    }
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==-1 && m==-1)
            break;
        ll x=find_sum(n-1);
        ll y=find_sum(m);
        printf("%lld\n",y-x);

    }

    return 0;
}
