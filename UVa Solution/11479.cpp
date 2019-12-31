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
int main()
{
//freopen("output.txt", "w", stdout);

    ll a,b,c,d,i=1;

    cin>>d;

    while(d--)
    {
        cin>>a>>b>>c;

         if(a<1 || b<1 || c<1)
            printf("Case %lld: Invalid\n",i);
         else if(a+b<=c || b+c<=a || a+c<=b)
            printf("Case %lld: Invalid\n",i);
         else if(a==b && b==c)
             printf("Case %lld: Equilateral\n",i);
         else if(a==b || b==c|| a==c )
        {
            printf("Case %lld: Isosceles\n",i);
        }
        else
             printf("Case %lld: Scalene\n",i);
         i++;
    }












    return 0;
}
