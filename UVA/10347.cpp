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

    double a,b,c,s,area,sq;

    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        sq=s*(s-a)*(s-b)*(s-c);
        if(sq>0){
        area=1.33333333333*sqrt(sq);
        printf("%.3lf\n",area);
        }
        else{
            printf("-1.000\n");
        }
    }
    return 0;
}
