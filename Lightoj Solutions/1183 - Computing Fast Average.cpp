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
ll segment_tree[262144],lazy[262144];
void lazypropagate(int low,int high,int pos)
{
    if(low!=high)
    {
        lazy[pos*2+1]=lazy[pos];
        lazy[pos*2+2]=lazy[pos];
    }
    segment_tree[pos]=((high-low)+1)*lazy[pos];
    lazy[pos]=-1;
}
void lazy_range_update(int st,int en,int low,int high,int pos,int val)
{
    if(lazy[pos]>-1)
        lazypropagate(low,high,pos);
    if(st>high || en<low)
        return;
    if(st<=low && en>=high)
    {
        segment_tree[pos]=((high-low)+1)*val;
        lazy[pos]=val;
        if(low!=high)
        {
            lazy[pos*2+1]=lazy[pos];
            lazy[pos*2+2]=lazy[pos];
        }
        lazy[pos]=-1;
        return ;
    }
    int mid=(low+high)/2;
    lazy_range_update(st,en,low,mid,pos*2+1,val);
    lazy_range_update(st,en,mid+1,high,pos*2+2,val);
    segment_tree[pos]=segment_tree[pos*2+1]+segment_tree[pos*2+2];
}
ll lazy_range_query(int st,int en,int low,int high,int pos)
{
    if(lazy[pos]>-1)
        lazypropagate(low,high,pos);
    if(st>high || en<low)
        return 0;// no overlap
    if(st<=low && en>=high )
        return segment_tree[pos];
    ll mid=(low+high)/2;
    ll left_side=lazy_range_query(st,en,low,mid,pos*2+1);
    ll right_side=lazy_range_query(st,en,mid+1,high,pos*2+2);
    return left_side+right_side;
}
pair<ll,ll> make_co_prime(ll a,ll b)
{
   ll gc=__gcd(a,b);
    while(gc!=1)
    {
        a/=gc;
        b/=gc;
        gc=__gcd(a,b);
    }
    return make_pair(a,b);
}
int main()
{
//freopen("output.txt", "w", stdout);

    int t,n,q,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        int command,x,y,v;
        fill(segment_tree,segment_tree+262144,0);
        fill(lazy,lazy+262144,-1);
        printf("Case %d:\n",cs++);
        while(q--)
        {
            scanf("%d",&command);
            if(command==1)
            {
                scanf("%d %d %d",&x,&y,&v);
                lazy_range_update(x,y,0,n-1,0,v);
            }
            else
            {
                scanf("%d %d",&x,&y);
                ll ans=lazy_range_query(x,y,0,n-1,0);
                ll deno=(abs(y-x)+1);
                //  cout<<ans<<"     "<<deno<<endl;
                ll check=ans/deno;
                if(check*deno==ans)
                {
                    printf("%lld\n",check);
                }
                else
                {
                    pair<ll,ll>res;
                    res=make_co_prime(ans,deno);
                    ll a,b;
                    a=res.first;
                    b=res.second;
                    printf("%lld/%lld\n",a,b);
                }
            }
        }
    }
    return 0;
}

