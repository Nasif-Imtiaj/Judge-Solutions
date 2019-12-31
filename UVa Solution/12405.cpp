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
    int z=0,i,j,a,b;
    string s;
    cin>>a;
    for(j=1; j<=a; j++)
    {
        cin>>b;
        getchar();
        cin>>s;
        for(i=0; i<b; i++)
        {
            if(s[i]=='.')
            {
              z++;
              i+=2;
            }
        }
        printf("Case %d: %d\n",j,z);
        z=0;
    }
    return 0;
}
