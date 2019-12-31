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
   // freopen("output.txt", "w", stdout);

    ll a=0,b,c,d;
    char x;
    while(cin>>x)
    {
        if(x=='#')
        {
            if(a==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            a=0;
        }
        else if(x=='1' || x=='0')
        {
            a=(a<<1)+x-'0';
            if(a>=131071)
                a=a%131071;
        }
    }
    return 0;
}
