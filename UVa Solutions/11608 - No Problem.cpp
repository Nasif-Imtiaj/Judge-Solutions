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
    int n,cs=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
            break;
        int cur=n;
        int x[15],y[15];
        for(int i=0; i<12; i++)
            scanf("%d",&x[i]);
        for(int i=0; i<12; i++)
            scanf("%d",&y[i]);
        printf("Case %d:\n",cs++);
        for(int i=0; i<12; i++)
        {
            if(y[i]<=cur)
            {
                printf("No problem! :D\n");
                cur-=y[i];
            }
            else
                printf("No problem. :(\n");
            cur+=x[i];
        }
    }

    return 0;
}
