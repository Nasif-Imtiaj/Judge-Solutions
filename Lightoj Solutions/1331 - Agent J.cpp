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
double tri(double x,double y,double z)
{
    double peri=(x+y+z)/2;
    double area=sqrt(peri*(peri-x)*(peri-y)*(peri-z));
    return area;
}
double angle(double x,double y,double z)
{
    double up,down,ang;
    up=(x*x)+(y*y)-(z*z);
    down=2*x*y;
    ang=acos(up/down);
    return ang;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        double r1,r2,r3;
        cin>>r1>>r2>>r3;
        printf("Case %d: ",cs++);
        double arc_area_r1,arc_area_r2,arc_area_r3,area_of_tri,ans;
        arc_area_r1=.5*r1*r1*angle(r1+r2,r1+r3,r2+r3);
        arc_area_r2=.5*r2*r2*angle(r1+r2,r2+r3,r1+r3);
        arc_area_r3=.5*r3*r3*angle(r1+r3,r2+r3,r1+r2);
        area_of_tri=tri(r1+r2,r1+r3,r2+r3);
        ans=area_of_tri-arc_area_r1-arc_area_r2-arc_area_r3;
        cout<<setprecision(10)<<fixed<<ans<<endl;
    }
    return 0;
}


