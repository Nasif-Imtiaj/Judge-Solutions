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
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,e,f,ans=0,highest=0,i,freq[30];
    string s;
    cin>>e;
    for(int k=1; k<=e; k++)
    {
        fill(freq,freq+28,0);
        highest=0;
        ans=0;
        cin>>a>>b>>c>>d;
        while(a--)
        {
            cin>>s;
            for(i=0; i<b; i++)
                freq[s[i]-65]++;
        }
        for(i=0; i<27; i++)
            if(freq[i]>highest)
                highest=freq[i];

        for(i=0; i<27; i++)
        {
            if(freq[i]==highest)
                ans+=freq[i]*c;
            else
                ans+=freq[i]*d;
        }
        printf("Case %d: ",k);
        co(ans)
    }
    return 0;
}
