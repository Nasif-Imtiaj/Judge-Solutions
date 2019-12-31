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
    double x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
    {
        if(x1==x3 && y1==y3)
        {
            x5=(x2+x4)-x1;
            y5=(y2+y4)-y1;
        }
        else if(x1==x4 && y1==y4)
        {
            x5=(x2+x3)-x1;
            y5=(y2+y3)-y1;
        }
        else if(x2==x3 && y2==y3)
        {

            x5=(x1+x4)-x2;
            y5=(y1+y4)-y2;
        }
        else
        {
            x5=(x1+x3)-x2;
            y5=(y1+y3)-y2;
        }
        printf("%.3lf %.3lf\n",x5,y5);
    }
    return 0;
}
