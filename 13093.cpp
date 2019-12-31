
#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
//freopen("output.txt", "w", stdout);

    string x,y;
    while(getline(cin,x))
    {
        getline(cin,y);
        string n,m,s;
        stringstream nn,mm;
        nn<<x;
        mm<<y;
        while(nn>>s)
        n+=s[0];
        while(mm>>s)
        m+=s[0];
        if(n==m)
            printf("yes\n");
        else
            printf("no\n");

    }
    return 0;
}
