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
int ans(int a)
{
    int sum=1,z=0;
    while(sum!=0)
    {
        sum*=10;
        sum++;
        sum%=a;
        z++;
       // cout<<sum<<endl;
    }
    return z+1;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a;
    while(cin>>a)
    {
        cout<<ans(a)<<endl;
    }
    return 0;
}
