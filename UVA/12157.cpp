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
    int a,b,c,d,t,x=0,y=0,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        while(a--)
        {
            cin>>b;
            if(b<30)
            {
                b-=b;
                x+=10;
                y+=15;
            }
            else if(b<60)
            {
                b-=b;
                x+=20;
                y+=15;
            }
            else{
                b-=59;
                x+=20;
                y+=15;
            }
            c=b/30;
            if(b%30!=0)
                c++;
            x+=(10*c);

            d=b/60;
            if(b%60!=0)
                d++;
            y+=(15*d);
            // cout<<x<<" "<<y<<endl;
        }
        // cout<<x<<" "<<y<<endl;
        if(x<y)
        {
            printf("Case %d: Mile %d\n",i,x);
        }
        else if(y<x)
        {
            printf("Case %d: Juice %d\n",i,y);
        }
        else
            printf("Case %d: Mile Juice %d\n",i,x);
        x=0,y=0;
    }
    return 0;
}
