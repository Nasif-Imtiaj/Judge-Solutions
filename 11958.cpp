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
int find_mins(int x,int y,int m,int n)
{
    int minute_tot=0,hour,minute;
    if(m>x)
    {
        hour=m-x;
        if(n>=y)
        {
            minute=n-y;
        }
        else
        {
            hour--;
            minute=(n+60)-y;
        }
    }
    else if(m==x)
    {
        hour=m-x;
        if(n>=y)
        {
            minute=n-y;
        }
        else
        {
            hour=23;
            minute=(n+60)-y;
        }
    }
    else
    {
        hour=(m+24)-x;
        if(n>=y)
        {
            minute=n-y;
        }
        else
        {
            hour--;
            minute=(n+60)-y;
        }
    }
   //cout<<hour<<" " <<minute<<endl;
    return (hour*60)+minute;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int k,h,m;
        char c;
        scanf("%d %d %c %d",&k,&h,&c,&m);
        int ans=INT_MAX;
        while(k--)
        {
            int x,y,z;

            scanf("%d %c %d %d",&x,&c,&y,&z);
            //cout<<x<<" "<<y<<" "<<z<<endl;
            int temp=find_mins(h,m,x,y);
            ans=min(ans,temp+z);
        }
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}

