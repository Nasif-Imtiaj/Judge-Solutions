#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,i,j;

    double avg=0,x[10000],ans=0,y,low,ans2=0;

    while(cin>>a)
    {
        if(a==0)
            break;
        for(i=0; i<a; i++)
        {
            cin>>x[i];
            avg+=x[i];
        }
        avg/=a;
        avg=roundf(avg * 100) / 100;
        for(i=0; i<a; i++)
        {
            y=x[i]-avg;
            y=roundf(y * 100) / 100;
            if(y>=0)
                ans+=y;
            else
                ans2+=abs(y);
        }
        ans=min(ans,ans2);
        printf("$%.2lf\n",ans);
        ans=0;
        avg=0;
        ans2=0;
    }
    return 0;
}
