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
    double r1,r2,p,h,t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>r1>>r2>>h>>p;
        double z=h*(r2*2)/((r1*2)-(r2*2));
        double R=(.5*(r1*2)*(p+z))/(h+z);
        double v=pi*p*((R*R)+(r2*R)+(r2*r2));
        v/=3;
        printf("Case %d: ",k);
        cout<<setprecision(9)<<fixed<<v<<endl;
    }
    return 0;
}

