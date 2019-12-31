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
    int z=0,a,b;

    while(cin>>a)
    {
        if(a==0)
            break;
        while(a>=2)
        {
            if(a==2)
                a++;
            z+=a/3;
            a=(a/3)+a%3;
        }
        cout<<z<<endl;
        z=0;
    }













    return 0;
}
