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
ll value(int a,int b)
{
   ll z=1;
   while(b--)
   z*=a;

return z;
}
int cnt(ll a)
{
    int z=0;
    while(a>0)
    {
        z++;
        a/=10;
    }
    return z;
}
int main()
{
//freopen("output.txt", "w", stdout);


    ll a,b,c,d,t,z=0;

    cin>>t;
    while(t--)
    {
        cin>>a;
        b=cnt(a);
        z=0;
        c=a;
        while(c>0){
            d=c%10;
            c/=10;
            z+=value(d,b);
        }
        if(z==a)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }
    return 0;
}
