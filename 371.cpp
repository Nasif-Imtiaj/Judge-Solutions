#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#include <unordered_map>
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
unordered_map<long long int,int>track;
int Ackermann_Functions(ll a)
{
    if(a==1)
        return 0;
    if (track.find(a) != track.end())
        return track.find(a)->second;
    int len;
    if(a%2==0)
        len= Ackermann_Functions(a/2)+1;
    else
        len= Ackermann_Functions((a*3)+1)+1;
    track[a]=len;
    return len;
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,c,s,e,high=0,ans,old,i;
    while(cin>>a>>b)
    {
        high=0;
        if(a==0 && b==0)
            break;
        s=min(a,b);
        e=max(a,b);
        for(i=s; i<=e; i++)
        {
            if(i==1)
                c=3;
            else
                c=Ackermann_Functions(i);
            if(c>high)
            {
                high=c;
                ans=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",s,e,ans,high);
    }
    return 0;
}
