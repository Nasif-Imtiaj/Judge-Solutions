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
int main()
{
//freopen("output.txt", "w", stdout);

    int a,i,old=0,total=0;

    string s;

    cin>>a;
    getchar();
    while(a--)
    {
        ci(s);
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='O')
            {
                total++;
                total+=old;
                old++;
            }
            else
            {
                old=0;
            }
        }
        co(total);
        old=0;
        total=0;
    }
    return 0;
}
