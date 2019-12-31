#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);

    int x,i=1;
    double u,v,t,s,a,m,n,o;
    while(cin>>x)
    {
        if(x==0)
            break;
        cin>>m>>n>>o;
        if(x==1)
        {
            u=m;
            v=n;
            t=o;
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(x==2)
        {
            u=m;
            v=n;
            a=o;
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);

        }
        else if(x==3)
        {
            u=m;
            a=n;
            s=o;
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(x==4)
        {

            v=m;
            a=n;
            s=o;

            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }









    return 0;
}
