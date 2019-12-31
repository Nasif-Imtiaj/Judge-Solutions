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


    ll a,b,c,d,m=0,n=0,x,y;

    while(cin>>a)
    {
        if(a<0)
            break;
        while(a--)
        {
            x=m;
            if(n>0)
            {
                m+=n;
                n=0;
            }
            if(m>0)
            {
                n=x;
            }
            m++;
          //  cout<<m<<" "<<n<<endl;
        }
        cout<<m<<" "<<m+n+1<<endl;
        m=0,n=0;
    }









    return 0;
}
