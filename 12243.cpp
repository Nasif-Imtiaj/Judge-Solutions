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
    int a,b,c,flg=0;
    string s,s1;
    stringstream z;
    char x,y;
    while(getline(cin,s))
    {
        if(s[0]=='*')
            break;
        z.clear();
        z<<s;
        x=s[0];
        if(x<=90)
            x+=32;
        while(z>>s1)
        {
           y=s1[0];
           if(y<=90)
            y+=32;
           if(x!=y)
            flg=1;
        }
        if(flg==0)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
        flg=0;
    }












    return 0;
}
