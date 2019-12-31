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
    double x,y,z;
    while(cin>>x)
    {
        double area=x*((sin((108*pi)/180))/(sin((63*pi)/180)));
        cout<<setprecision(10)<<fixed<<area<<endl;
    }

    return 0;
}
