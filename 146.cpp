#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);
    int a;
    string s;
    while(cin>>s)
    {
        if(s=="#")
            break;
        a=next_permutation(s.begin(),s.end());
        if(a==0)
            cout<<"No Successor"<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
