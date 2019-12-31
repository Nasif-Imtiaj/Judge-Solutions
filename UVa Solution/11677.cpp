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

    int h1,m1,h2,m2,ans=0,i,j;

    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;

        for(i=m1; i<=60; i++)
        {
            if(i==60)
            {
                i=0;
                h1++;
            }
            if(i==m2)
            {
                if(h1==h2)
                    break;
            }
            ans++;
            if(h1==24)
                h1=0;
        }
        co(ans)
        ans=0;
    }














    return 0;
}
