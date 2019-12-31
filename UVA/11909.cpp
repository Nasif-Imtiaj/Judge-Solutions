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

    double l,w,h,d,ans,rad,perpendicular,tri;

    while(cin>>l>>w>>h>>d)
    {

        perpendicular=l*tan(d*pi/180);

        if(perpendicular>h)
        {
            ans = 0.5*h*h*l*w/perpendicular;
        }
        else
        {
            tri = 0.5*l*perpendicular*w;
            ans = (l*w*h)-tri;
        }
        printf("%.3lf mL\n",ans);

    }




    return 0;
}
