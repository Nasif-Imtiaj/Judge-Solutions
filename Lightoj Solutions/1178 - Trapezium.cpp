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
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        double a,b,c,d,up,down,frac,sq,area;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        up=(b*b)-(d*d)+((a-c)*(a-c));
        down=2*(a-c);
        frac=(up/down)*(up/down);
        sq=sqrt((b*b)-frac);
        area=((a+c)/2)*sq;
        printf("Case %d: ",k);
        cout<<setprecision(6)<<fixed<<area<<endl;
    }
    return 0;
}

