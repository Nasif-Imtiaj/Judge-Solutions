#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int x[1000];
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,d,i,player,ans=0,j;
    while(cin>>a>>b)
    {
        for(i=0; i<b; i++)
        {
            for(j=0; j<a; j++)
            {
                cin>>c;
                x[j+1]+=c;
            }
        }
        for(i=1; i<=a; i++)
        {
            if(x[i]>=ans)
            {
                ans=x[i];
                player=i;
            }
        }
        cout<<player<<endl;
        ans=0;
        fill(x,x+1000,0);
    }
    return 0;
}

