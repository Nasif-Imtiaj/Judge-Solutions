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
freopen("output.txt", "w", stdout);
    int r1=0,b1=0,g1=0,r2=0,b2=0,g2=0,odd=0,pali1=0,pali2=0,i;
    string s;
    while(cin>>s)
    {
        r1=0,b1=0,g1=0,r2=0,b2=0,g2=0,odd=0,pali1=0,pali2=0;
        for(i=0; i<6; i++)
        {
            if(s[i]=='r')
                r1++;
            if(s[i]=='b')
                b1++;
            if(s[i]=='g')
                g1++;
        }
        if(r1%2!=0)
            odd++;
        if(b1%2!=0)
            odd++;
        if(g1%2!=0)
            odd++;
        if(odd==1 || odd==0)
            pali1=1;
        odd=0;
        for(i=6; i<12; i++)
        {
            if(s[i]=='r')
                r2++;
            if(s[i]=='b')
                b2++;
            if(s[i]=='g')
                g2++;
        }
        if(r2%2!=0)
            odd++;
        if(b2%2!=0)
            odd++;
        if(g2%2!=0)
            odd++;
        if(odd==1 || odd==0)
            pali2=1;
        if(r1==r2 && b1==b2 && g1==g2)
        {
            if(pali1==1 && pali2==1)
                co("TRUE")
                else
                    co("FALSE")
                }
        else
        {
            co("FALSE")
        }
    }
    return 0;
}
