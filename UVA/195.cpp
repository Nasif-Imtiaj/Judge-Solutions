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
bool comp(char x,char y)
{
    if(tolower(x)==tolower(y))
        return x<y;
    return tolower(x)<tolower(y);

}
int main()
{
freopen("output.txt", "w", stdout);
    string s;
    int a,len;
    cin>>a;
    getchar();
    while(a--)
    {
        cin>>s;
        sort(s.begin(),s.end(),comp);
        co(s)
        while(next_permutation(s.begin(),s.end(),comp))
            co(s)
        }
    return 0;
}
