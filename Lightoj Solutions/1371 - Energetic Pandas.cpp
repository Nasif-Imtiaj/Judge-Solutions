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
int weight[1050],panda[1050],n;
int bs(int val)
{
    int pos=-1,l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(weight[mid]<=val)
        {
            pos=max(pos,mid);
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return pos;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&weight[i]);
        for(int i=0; i<n; i++)
            scanf("%d",&panda[i]);
        sort(weight,weight+n);
        sort(panda,panda+n);
        ll ans=1;
        int flg=0;
        for(int i=0; i<n; i++)
        {
            if(weight[i]>panda[i])
            {
                flg=1;
                break;
            }
            else
            {
                if(i==n-1)
                    break;
                int pos=bs(panda[i]);
                if(pos>i)
                {
                    pos++;
                    ll mul=pos-i;
                    ans=(ans*mul)%MOD;
                }
            }
        }
        if(flg)
            ans=0;
        printf("Case %d: %lld\n",cs,ans);
    }

    return 0;
}

