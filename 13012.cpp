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
    int t,a,z=0;
    while(cin>>t)
    {
        for(int i=0; i<5; i++)
        {
            cin>>a;
            if(a==t)
                z++;
        }
        cout<<z<<endl;
        z=0;
    }
    return 0;
}
