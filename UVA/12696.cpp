#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);
    double a,b,c,d,x,y;
    int t,z=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        x=a+b+c;
        if(a<=56.00 && b<=45.00 && c<=25.00 && d<=7.00 ||x<=125.00 && d<=7.00)
        {
            cout<<"1"<<endl;
            z++;
        }
        else
            cout<<"0"<<endl;
    }
    cout<<z<<endl;
    return 0;
}
