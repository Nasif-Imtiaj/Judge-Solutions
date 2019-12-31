#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,e=0,f,total=0;
    cin>>d;
    while(d--)
    {
        cin>>a>>b>>c;
        a+=b;
        e=0;
        while(a>0)
        {
            a+=e;
            total+=a/c;
            e=a%c;
            a=a/c;

        }
        co(total)
        total=0;
    }






    return 0;
}
