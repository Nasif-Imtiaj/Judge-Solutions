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
string s[11],ans;
int x[5000];
int y[5000];
int main()
{
//freopen("output.txt", "w", stdout);
    s[0]=" ";
    s[1]=".,?";
    s[2]="abc";
    s[3]="def";
    s[4]="ghi";
    s[5]="jkl";
    s[6]="mno";
    s[7]="pqrs";
    s[8]="tuv";
    s[9]="wxyz";
    char m='"';
    int a,b,c,t,i;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(i=0; i<a; i++)
        {
            cin>>x[i];
        }
        for(i=0; i<a; i++)
        {
            cin>>y[i];
        }
        for(i=0; i<a; i++)
        {
            if(x[i]==1 && y[i]==4)
                ans+=m;
            else
            ans+=s[x[i]][y[i]-1];
        }
        cout<<ans<<endl;
        ans.clear();
    }
    return 0;
}
