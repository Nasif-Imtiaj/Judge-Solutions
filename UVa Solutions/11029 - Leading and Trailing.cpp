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
int Bigmod(int a,int b)
{
    if(b==0)
        return 1%1000;
    ll x=Bigmod(a,b/2);
    x=(x*x)%1000;
    if(b%2==1)
        x=(x*a)%1000;
    return x;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d",&a,&b);
        double X=b*(log10(a));
        X=X-(int)X;
        double ans=pow(10,X);
        ans*=100;
        c=ans;
        d=Bigmod(a,b);
        if(c<10)
            printf("00");
        else if(c<100)
            printf("0");

        printf("%d...",c);
        if(d<10)
            printf("00");
        else if(d<100)
            printf("0");
        printf("%d\n",d);
    }
    return 0;
}
