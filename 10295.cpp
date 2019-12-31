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
    map<string,ll>words;
    ll sum=0,a,b,c;
    string s;
    cin>>a>>b;
    getchar();
    while(a--)
    {
        cin>>s>>c;
        words[s]=c;
    }
    while(b--)
    {
        while(cin>>s)
        {
            if(s==".")
                break;
            if(words[s]!=0)sum+=words[s];
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
