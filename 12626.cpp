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
    int a,b,c,x[120],i,ans=0;
    cin>>a;
    getchar();
    while(a--)
    {
        string s;
        fill(x,x+120,0);
        getline(cin,s);
        for(i=0; i<s.length(); i++)
        {
            x[s[i]]++;
        }
        while(x['M']>=1 && x['A']>=3 && x['R']>=2 && x['G']>=1 &&  x['T']>=1 && x['I']>=1)
        {
            x['M']-=1;
            x['A']-=3;
            x['R']-=2;
            x['G']-=1;
            x['T']-=1;
            x['I']-=1;
            ans++;
        }
        co(ans)
        ans=0;
    }
    return 0;
}
