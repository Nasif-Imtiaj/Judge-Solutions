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
    double x,y,z,peri,half_peri,area,inrad;
    while(cin>>x>>y>>z)
    {

        if(x==y && y==z && x==z)
        {
           inrad=x/(2*sqrt(3));
        }
        else
        {
            peri=(x+y+z);
            half_peri=peri/2;
            area=sqrt(half_peri*((half_peri-x)*(half_peri-y)*(half_peri-z)));
            inrad=(2*area)/peri;
        }
        printf("The radius of the round table is: ");
        cout<<setprecision(3)<<fixed<<inrad<<endl;
    }

    return 0;
}
