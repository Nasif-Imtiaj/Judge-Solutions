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
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,t,x,y,z;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        cin>>a;
        printf("Case %d: ",cs);
        b=sqrt(a);
        if(b%2!=0)
        {
            if(b*b==a)
            {
                 cout<<"1 "<<b<<endl;

            }
            else
            {
                x=b*b;
                y=x+b;
                z=(b+1)*(b+1);
                if(a>x && a<=y)
                {
                    cout<<a-x<<" "<<b+1<<endl;
                }
                else
                {
                    cout<<b+1<<" "<<z-a+1<<endl;
                }
            }
        }
        else
        {
            if(b*b==a)
            {
               cout<<b<<" 1"<<endl;
            }
            else
            {
                x=b*b;
                y=x+b;
                z=(b+1)*(b+1);
                if(a>y && a<z)
                {
                    cout<<z-a+1<<" "<<b+1<<endl;
                }
                else
                {
                    cout<<b+1<<" "<<a-x<<endl;
                }
            }
        }
    }
    return 0;
}
