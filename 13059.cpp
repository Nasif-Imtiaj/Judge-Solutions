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

   long long int a,z;
    while(cin>>a)
    {
        z=0;
        while(a!=1)
        {
            z+=a/2;
            if(a%2!=0)
                a++;
            a/=2;
        }
        cout<<z<<endl;
    }


    return 0;
}
