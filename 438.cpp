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

    double x1,y1,x2,y2,x3,y3,a,b,c,x,y,s,area,r;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
    a=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    b=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    c=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    s=0.5*fabs(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1);
    r=(a*b*c)/(4*s);
    area=2*3.141592653589793*r;
    printf("%.2lf\n",area);
    }



    return 0;
}
