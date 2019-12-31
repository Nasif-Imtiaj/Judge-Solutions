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
#define pi acos(-1)
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);

    double a,b,c,high,area_triangle,area_circle,area_circle_inside_triangle,base,height;
    double s,r,d,R;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        area_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        r=area_triangle/s;
        R=(a*b*c)/(4*area_triangle);
        area_circle=R*R*pi;
        area_circle-=area_triangle;
        area_circle_inside_triangle=r*r*pi;
        area_triangle-=area_circle_inside_triangle;
        printf("%.4lf %.4lf %.4lf\n",area_circle,area_triangle,area_circle_inside_triangle);
    }
    return 0;
}
