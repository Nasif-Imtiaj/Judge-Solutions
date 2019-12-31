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
int leap_year(int s,int e)
{
    s--;
    int z,a,b,c;
    a=(e/4)-(s/4);
    b=(e/100)-(s/100);
    c=(e/400)-(s/400);
    z=a-b+c;
    return z;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a1,a2,d1,d2,s,e,t,i;
    string m1,m2;
    char x;
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        cin>>m1>>a1>>x>>d1;
        getchar();
        cin>>m2>>a2>>x>>d2;
        getchar();
        if(m1=="January" || m1=="February" && a1<=29)
            s=d1;
        else
            s=d1+1;
        if(m2=="January" || m2=="February" && a2<29)
            e=d2-1;
        else
            e=d2;
        printf("Case %d: ",i);
        cout<<leap_year(s,e)<<endl;
    }
    return 0;
}
