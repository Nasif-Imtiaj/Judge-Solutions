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
    int a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        c=b/2;
        if(b%2!=0)
        {
            b/=2;
            b++;
        }
        else
            b/=2;
        cout<<c<<" "<<b<<endl;
    }
    return 0;
}
