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
 //   freopen("output.txt", "w", stdout);

    int a,b,c,d,i,j,k;
    char x,y;
    double z=0;
    string s;
    map<char,int>mp;
    cin>>a;
    while(a--)
    {
        cin>>b;
        getchar();
        for(i=0; i<b; i++)
        {
            cin>>x>>d;
            mp[x]=d;
        }
        cin>>c;
        getchar();
        for(i=0; i<c; i++)
        {
            getline(cin,s);
            for(j=0; j<s.length(); j++)
            {
                if(mp[s[j]]!=0)
                {
                    z+=mp[s[j]];
                }
            }
        }
        printf("%.2lf$\n",z/100);
        mp.clear();
        z=0;
    }
    return 0;
}
