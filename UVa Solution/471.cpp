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
ll lim=9876543210;
int check_unique(long long int a)
{
    int b,i,j,freq[10];
    fill(freq,freq+10,0);
    while(a>0)
    {
        b=a%10;
        a/=10;
        freq[b]++;
    }
    for(i=0; i<10; i++)
    {
        if(freq[i]>1)
            return 0;
    }
    return 1;
}
int len(long long int a)
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
    // freopen("output.txt", "w", stdout);

    ull a,b,c,d,e,f,i,z=0;
    string s;
    cin>>f;
    while(f--)
    {
        cin>>a;
        for(i=1; a*i<=lim; i++)
        {
            b=a*i;
            c=check_unique(b);
            e=check_unique(i);
            if(c==1 && e==1)
                cout<<b<<" / "<<i<<" = "<<a<<endl;;
            d=len(b);
            if(d==11)
                break;
        }
        if(f!=0)
            cout<<endl;
    }
    return 0;
}
