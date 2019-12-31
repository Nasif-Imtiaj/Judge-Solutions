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
int x[1000000];
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,i,j=1,start=1,track=0;
    sd(b)
    while(b--)
    {
        sd(a)
        for(i=0; i<a; i++)
        {
            sd(x[i])
        }
        for(i=0; i<a; i++)
        {
            if(x[i]==start)
            {
                start++;
                track++;
            }
        }
        printf("Case %d: ",j);
        co(a-track);
        track=0;
        start=1;
        j++;
    }
    return 0;
}
