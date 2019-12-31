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
string s[1000];
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,i=0,j;
    string x;
    cin>>a;
    getchar();
    for(i=0; i<a*2; i+=2)
    {
        getline(cin,x);
        s[i]=x;
        getline(cin,x);
        s[i+1]=x;
    }
    cin>>b;
    getchar();
    for(i=0; i<b; i++)
    {
        getline(cin,x);
        for(j=0; j<a*2; j++)
        {
            if(j%2==0)
            {
                if(x==s[j])
                    co(s[j+1])
                }
        }
    }
    return 0;
}
