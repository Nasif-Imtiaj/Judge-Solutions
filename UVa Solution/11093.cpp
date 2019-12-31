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
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int st[n+5],en[n+5];
        ll a=0,b=0;
        int pos=-1;
        ll x=0,y=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&st[i]);
            a+=st[i];
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d",&en[i]);
            b+=en[i];
            x+=st[i];
            y+=en[i];
            if(y>x)
            {
                pos=-1;
                x=0;
                y=0;
            }
            else
            {
                if(pos<0)
                {
                    pos=i;
                }
            }
        }
        if(pos!=-1 && a>=b)
            printf("Case %d: Possible from station %d\n",cs++,pos+1);

        else
            printf("Case %d: Not possible\n",cs++);

    }

    return 0;
}

