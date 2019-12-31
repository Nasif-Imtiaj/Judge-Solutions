#include<bits/stdc++.h>
using namespace std;
#include <unordered_map>
#include <unordered_set>
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
vector<int>ord;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b;
    unordered_map<int,int>ump;
    while(cin>>a)
    {
        if(ump[a]==0)
        {
            ord.push_back(a);
        }
        ump[a]++;
    }
    for(int i=0; i<ord.size(); i++)
    {
        cout<<ord[i]<<" "<<ump[ord[i]]<<endl;
    }












    return 0;
}
