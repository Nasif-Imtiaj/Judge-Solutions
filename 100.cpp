#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int turn(int a)
{

    int track=0;
    if(a==1)
        return 1;
    while(a>1)
    {
        if(a%2==0)
            a/=2;
        else
            a=(a*3)+1;
        track++;

    }
    return track+1;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int i,a,b,c,x,y;
    while(cin>>a>>b)
    {
        x=a;
        y=b;
        int high=0;
        if(b<a)
            swap(a,b);
            high=0;
        for(i=a; i<=b; i++)
        {
            c=turn(i);
            if(c>high)
                high=c;

        }
        cout<<x<<" "<<y<<" "<<high<<endl;
    }








    return 0;
}
